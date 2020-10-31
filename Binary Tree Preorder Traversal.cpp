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
#include <stack>

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
    vector<int> preorderTraversal(TreeNode* root)
    {
        if(root == nullptr) return {};
        vector<int> res;
        stack<TreeNode*> s{{root}};
        while(!s.empty())
        {
            TreeNode* t = s.top(); s.pop();
            res.push_back(t->val);
            if(t->right) s.push(t->right);
            if(t->left) s.push(t->left);
        }
        return res;
    }
};