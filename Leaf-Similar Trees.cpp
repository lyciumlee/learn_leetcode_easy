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
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        string treeStr1 = "";
        string treeStr2 = "";
        getLeaf(root1, treeStr1);
        getLeaf(root2, treeStr2);
        return treeStr1 == treeStr2;
    }
    void getLeaf(TreeNode* root, string &treeStr)
    {
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr)
        {
            treeStr += to_string(root->val) + "-";
        }
        getLeaf(root->left, treeStr);
        getLeaf(root->right, treeStr);
    }
    
};