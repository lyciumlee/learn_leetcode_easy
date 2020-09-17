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
    int minDepth(TreeNode* root)
    {
        return minDepth(root, false);
    }
    static int minDepth(TreeNode* root, bool hasBrother)
    {
        if(root == nullptr) return hasBrother ? INT_MAX : 0;
        return 1 + min(minDepth(root->left, root->right != nullptr), minDepth(root->right, root->left != nullptr));

    }
};