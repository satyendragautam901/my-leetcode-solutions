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
    ListNode* removeElements(ListNode* head, int val) {
        // dummy node banate hain, head uska child hoga
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next; // link skip
                delete curr;             // free memory
                curr = prev->next;       // move forward
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        head = dummy->next;
        delete dummy; // dummy ko free kar do
        return head;
    }
};