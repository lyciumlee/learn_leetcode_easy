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
    void reorderList(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr) return;
        stack<ListNode*> st;
        ListNode* cur = head;
        while(cur)
        {
            st.push(cur);
            cur = cur->next;
        }
        int cnt = ((int)st.size() - 1) / 2;
        cur = head;
        while(cnt > 0)
        {
            cnt--;
            auto t = st.top() ;st.pop();
            ListNode* next = cur->next;
            cur->next = t;
            t->next = next;
            cur = next;
        }
        st.top()->next = nullptr;
    }
};