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

#include <stack>



using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        ListNode* cur = head;
        while (cur != nullptr)
        {
            myS.push(cur->val);
            cur = cur->next;
        }
        while(head != nullptr)
        {
            if(head->val != myS.top()) return false;
            myS.pop();
            head = head->next;
        }
        return true;
    }

private:
    stack<int> myS;
};