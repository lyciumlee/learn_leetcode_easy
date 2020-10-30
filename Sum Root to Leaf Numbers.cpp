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
    int sumNumbers(TreeNode* root)
    {
        return sumNumbersDFS(root, 0);
    }
    int sumNumbersDFS(TreeNode* root, int sum)
    {
        if(root == nullptr) return 0;
        sum = sum * 10 + root->val;
        if(root->left == nullptr && root->right == nullptr) return sum;
        return sumNumbersDFS(root->left, sum) + sumNumbersDFS(root->right, sum);
    }

};