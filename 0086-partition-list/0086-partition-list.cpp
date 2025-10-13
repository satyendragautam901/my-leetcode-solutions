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
    ListNode* partition(ListNode* head, int x) {

        if(!head){
            return head;
        }
        if(!head->next){
            return head;
        }
        
        ListNode* smallerHead = new ListNode(0); // dummy node for smaller list
        ListNode* greaterHead = new ListNode(0); // dummy node for greater list
        
        ListNode* smaller = smallerHead;
        ListNode* greater = greaterHead;
        
        while(head != nullptr) {
            if(head->val < x) {
                smaller->next = head;
                smaller = smaller->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        
        // Connect smaller list to greater list
        smaller->next = greaterHead->next;
        greater->next = nullptr; // Important: end the list
        
        ListNode* result = smallerHead->next;
        delete smallerHead;
        delete greaterHead;
        
        return result;
    }
};