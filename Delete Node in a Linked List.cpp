/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};



class Solution {
public:
    void deleteNode(ListNode* node)
    {
        ListNode* nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        delete nextNode;
    }
};