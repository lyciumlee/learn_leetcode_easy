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
    int rangeSumBST(TreeNode* root, int L, int R)
    {
        int res = 0;
        helper(root, L, R, res);
        return res;
    }
    void helper(TreeNode* root, int L, int R, int& res)
    {
        if(root == nullptr) return;
        if(root->val >= L && root->val <= R) res += root->val;
        helper(root->left, L, R, res);
        helper(root->right, L, R, res);
    }
};