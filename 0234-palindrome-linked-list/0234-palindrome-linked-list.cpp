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

    ListNode *reversss(ListNode* temp){
        // here only the list which are greater than 2nodes
        ListNode *curr = temp, *prev = nullptr, *fut = temp->next;

        while(fut){
            curr->next = prev;
            prev = curr;
            curr = fut;
            fut = fut->next;
        }
        curr->next = prev;     
        return curr;
    }

    bool isPalindrome(ListNode* head) {
        if(!head){ // edge case , if empty
            return false;
        }
        if(head->next == nullptr){ // if single node
            return true;
        }
        // if two nodes
        if(head->next->next == nullptr){
            if(head->val == head->next->val){
                return true;
            }
            else{
                return false;
            }
        }

        // Step 1: find middle
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: reverse second half
        ListNode* secondHalf = reversss(slow);

        // Step 3: compare
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;
        while(temp) {
            if(firstHalf->val != temp->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            temp = temp->next;
        }
        


        return true;
        
    }
};