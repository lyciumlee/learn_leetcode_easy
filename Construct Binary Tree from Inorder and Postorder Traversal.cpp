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
#include <unordered_map>
#include <function>

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
        unordered_map<int, int> pos;
        for(int i = 0; i < inorder.size(); i++)
        {
            pos[inorder[i]] = i;
        }

        function<TreeNode*(int, int, int, int)> buildTree = [&](int is, int ie, int ps, int pe)
        {
            if(ps > pe) return (TreeNode*)nullptr;

            int im = pos[postorder[pe]];
            int pm = ps + (im - is) - 1;

            auto root = new TreeNode(postorder[pe]);
            root->left = buildTree(is, im - 1, ps, pm);
            root->right = buildTree(im + 1, ie, pm + 1, pe - 1);

            return root;
        };
        return buildTree(0, inorder.size() - 1, 0, postorder.size() - 1);
    }
};