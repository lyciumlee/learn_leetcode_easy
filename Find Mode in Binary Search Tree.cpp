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
#include <algorithm>
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
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        int mx = 0;
        unordered_map<int, int> m; 
        inorder(root, m, mx);
        for (auto a : m) {
            if (a.second == mx) {
                res.push_back(a.first);
            }
        }
        return res;
    }
    void inorder(TreeNode* node, unordered_map<int, int>& m, int& mx) {
        if (!node) return;
        inorder(node->left, m, mx);
        mx = max(mx, ++m[node->val]);
        inorder(node->right, m, mx);
    }
};