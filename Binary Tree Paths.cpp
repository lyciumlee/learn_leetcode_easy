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
#include <vector>
#include <string>
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
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> res;
        if(root) findWay(root, "", res);
        return res;
    }
    void findWay(TreeNode* root, string out, vector<string>& res)
    {
        if(!root->left && !root->right) res.push_back(out + to_string(root->val));
        if(root->left) findWay(root->left, out + to_string(root->val) + "->", res);
        if(root->right) findWay(root->right, out + to_string(root->val) + "->", res);
    }
};