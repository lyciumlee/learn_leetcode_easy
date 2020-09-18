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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *a,*b;
        a = headA;
        b = headB;
        if(a == nullptr || b == nullptr) return nullptr;
        while(a->next != nullptr)
        {
            a = a->next;
        }
        while(b->next != nullptr)
        {
            b = b->next;

        }
        if(a != b) return nullptr;
        a = headA;
        b = headB;
        while(a != b)
        {
            a = a->next ? a->next : headB;
            b = b->next ? b->next : headA;
        }
        return a;
    }
};