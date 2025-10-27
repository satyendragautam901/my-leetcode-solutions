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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // edge case
        if (!head->next && n == 1) {
            return nullptr;
        }
        ListNode* temp = head;
        int cnt = 0;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        int To_rem = cnt - n;
        if (To_rem == 0) {
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
        temp = head;
        for (int i = 1; i < To_rem; i++) {
            temp = temp->next;
        }
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete; // Important to free memory

        return head;
    }
};