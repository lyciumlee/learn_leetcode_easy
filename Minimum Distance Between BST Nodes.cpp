/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <limits.h>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int minDiffInBST(TreeNode* root)
    {
        int res = INT_MAX;
        helper(root, INT_MIN, INT_MAX, res);
        return res;
    }
private:
    void helper(TreeNode* node, int low, int high, int &res)
    {
        if(node == nullptr) return;
        if(low != INT_MIN) res = min(res, node->val - low);
        if(high != INT_MIN) res = min(res, high - node->val);
        helper(node->left, low, node->val, res);
        helper(node->right, node->val, high, res);
    }
};