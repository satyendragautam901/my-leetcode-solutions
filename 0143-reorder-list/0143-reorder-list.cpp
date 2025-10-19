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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // ListNode *temp = prev;
        // while(temp){
        //     cout<<temp->val<<" ";
        //     temp = temp->next;

        // }

        return prev;
    }
    
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        
        // Step 1: Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: Split the list into two halves
        prev->next = nullptr; // End first half
        ListNode* secondHalf = slow;
        
        // Step 3: Reverse the second half
        ListNode* reversedSecond = reverse(secondHalf);
        
        // Step 4: Merge the two halves
        ListNode* first = head;
        ListNode* second = reversedSecond;
        
        while (first && second) {
            ListNode* firstNext = first->next;
            ListNode* secondNext = second->next;
            
            first->next = second;
            if(firstNext)
                second->next = firstNext;
            
            first = firstNext;
            second = secondNext;
        }
       if(first){
         first->next = second;
       }
    }
};