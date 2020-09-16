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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if(l1 == nullptr)
        {
            return l2;
        }
        if(l2 == nullptr)
        {
            return l1;
        }
        ListNode head(-1);
        ListNode *phead = &head;
        for(;l1 != nullptr && l2 != nullptr; phead = phead->next)
        {
            if(l1->val > l2->val)
            {
                phead->next = l2;
                l2 = l2->next;
            }else{
                phead->next = l1;
                l1 = l1->next;
            }
        }
        phead->next = l1 != nullptr ? l1 : l2;
        return head.next;
    }
};