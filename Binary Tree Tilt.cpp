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
#include <math.h>


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
    int findTilt(TreeNode* root)
    {
        int res = 0;
        postOrder(root, res);
        return res;
    }
    int postOrder(TreeNode* root, int& res)
    {
        if(root == nullptr) return 0;
        int leftSum = postOrder(root->left, res);
        int rightSum = postOrder(root->right, res);
        res += abs(leftSum - rightSum);
        return leftSum + rightSum + root->val;
    }
};