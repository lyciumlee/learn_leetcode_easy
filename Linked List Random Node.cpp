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
#include <cstdlib>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    Solution(ListNode* head) {
        len = 0;
        ListNode *cur = head;
        this->head = head;
        while (cur) {
            ++len;
            cur = cur->next;
        }
    }
    int getRandom() {
        int t = rand() % len;
        ListNode *cur = head;
        while (t) {
            --t;
            cur = cur->next;
        }
        return cur->val;
    }
private:
    int len;
    ListNode *head;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */