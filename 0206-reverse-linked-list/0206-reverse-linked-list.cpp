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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode *curr = head; // points to current head
        ListNode *prev =nullptr, *future = nullptr; // initially future and pre are null 

        while(curr){ // jab tak current exist krta ho 

            future = curr->next; // points future to current ka next
            curr->next = prev; // current ka next previous ko point krega
            prev = curr; // previous, current ko point krega
            curr = future; // current ab future ko means curr->next ko points krega
        }
        head = prev;
        return head;

    }
};