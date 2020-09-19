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
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode res(-1);
        ListNode* pre = &res;
        res.next = head;
        while(pre->next)
        {
            if(pre->next->val == val)
            {
                ListNode* aim = pre->next;
                pre->next = aim->next;
                delete aim;
            }else{
                pre = pre->next;
            }
        }
        return res.next;
    }
};