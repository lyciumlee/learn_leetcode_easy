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
    int sumRootToLeaf(TreeNode* root)
    {
        return treeAddPath(root, 0);
    }
    int treeAddPath(TreeNode* root, int sum)
    {
        if(root == nullptr) return 0;
        sum = 2 * sum + root->val;
        if(root->left == nullptr && root->right == nullptr) return sum;
        int leftSum = (root->left == nullptr) ? 0 : treeAddPath(root->left, sum);
        int rightSum = (root->right == nullptr) ? 0 : treeAddPath(root->right, sum);
        return leftSum + rightSum;
    }
};