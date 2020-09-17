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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(!head) return head;
        ListNode dummy(head->val + 1);
        dummy.next = head;
        recur(&dummy, head);
        return dummy.next;
    }
private:
    static void recur(ListNode* pre, ListNode* cur)
    {
        if(cur == nullptr) return;
        if(pre->val == cur->val)
        {
            pre->next = cur->next;
            delete cur;
            recur(pre, pre->next);
        }else{
            recur(pre->next, cur->next);
        }

    }
};