/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;
    
    // using slow and fast pointer
    ListNode *slow = head;
    ListNode *fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // 1 step
        fast = fast->next->next;   // 2 steps

        if (slow == fast) {        // cycle detected
            return true;
        }
    }
     
     return false; 
    }
};