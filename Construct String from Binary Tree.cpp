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
#include <string>

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
    string tree2str(TreeNode* t)
    {
        if(t == nullptr) return "";
        const string s = to_string(t->val);
        if(t->left == nullptr && t->right == nullptr) return s;
        if(t->right == nullptr) return s + "(" + tree2str(t->left) + ")";
        return s + "(" + tree2str(t->left) + ")" + "(" + tree2str(t->right) + ")";
    }
};