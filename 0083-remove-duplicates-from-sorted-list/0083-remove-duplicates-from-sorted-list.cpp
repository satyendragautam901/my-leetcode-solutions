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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (!head || !head->next)
            return head;

        ListNode* pre = head;
        ListNode* fut = head->next;

        while (fut) {
            if (pre->val == fut->val) {
                pre->next = fut->next;
                delete fut;
                fut = pre->next; //  move fut forward only
            } else {
                pre = fut; // move both only when values differ
                fut = fut->next;
            }
        }
        return head;
    }
};