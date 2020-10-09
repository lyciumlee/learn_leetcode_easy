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
    int findSecondMinimumValue(TreeNode* root)
    {
        return DFS(root, root->val);
    }

private:
    int DFS(TreeNode* root, int s111)
    {
        if(root == nullptr) return -1;
        if(root->val > s111) return root->val;
        int sl = DFS(root->left, s111);
        int sr = DFS(root->right, s111);
        if(sl == -1) return sr;
        if(sr == -1) return sl;
        return min(sl, sr);
    }
};