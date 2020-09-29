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

#include <unordered_map>
#include <pair>

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
    bool isCousins(TreeNode* root, int x, int y)
    {
        findNodeHight(root, 0, nullptr);
        auto x_node = treeMap[x];
        auto y_node = treeMap[y];
        return x_node.first != y_node.first && x_node.second == y_node.second;
    }
    void findNodeHight(TreeNode* root, int height, TreeNode* parent)
    {
        if(root == nullptr) return;
        treeMap[root->val] = make_pair(parent, height);
        findNodeHight(root->left, height+1, root);
        findNodeHight(root->right, height+1, root);
    }
private:
    unordered_map<int, pair<TreeNode*, int>> treeMap;
};