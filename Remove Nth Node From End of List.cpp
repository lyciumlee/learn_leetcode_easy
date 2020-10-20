/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(head->next == nullptr) return nullptr;
        ListNode* pre = head, *cur = head;
        for(int i = 0; i < n; ++i)
        {
            cur = cur->next;
        }
        if(cur == nullptr) return head->next;
        while(cur->next)
        {
            cur = cur->next;
            pre = pre->next;
        }
        pre->next = pre->next->next;
        
        return head;
    }
};