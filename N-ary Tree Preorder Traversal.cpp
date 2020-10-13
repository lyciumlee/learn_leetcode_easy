/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#include <vector>

using namespace std;


class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> preorder(Node* root)
    {
        vector<int> res;
        preorder(root, res);
        return res;
    }
private:
    void preorder(Node* root, vector<int>& res)
    {
        if(root == nullptr) return;
        res.push_back(root->val);
        for(const auto &child : root->children)
        {
            preorder(child, res);
        }
    }
};