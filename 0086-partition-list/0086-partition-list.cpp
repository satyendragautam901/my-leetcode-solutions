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
        
        /*
        Algo:
        step1: create two list one for smaller and one for greater or equal
        step2: smaller value smaller list, greater value greater list
        step3: after ending loop, connect smaller->next to greater
        step4: now return new head
        */
        ListNode *sm = nullptr;
        ListNode *curr1 = nullptr;

        ListNode *gr = nullptr;
        ListNode *curr2 = nullptr;

        while(head){
            ListNode *temp = new ListNode(head->val);
            // check value is smaller or greater

            if(head->val < x){ // belongs to smaller list
                if(sm == nullptr){
                    sm = temp;
                    curr1 = temp;
                }
                
                else{
                    curr1->next = temp;
                    curr1 = temp;
                }
            }
            else{ // otherwise greatr or equal hai
                if(gr == nullptr){
                    gr = temp;
                    curr2 = temp;
                }
                else{
                    curr2->next = temp;
                    curr2 = temp;
                }
            }
            head = head->next;
        }

        // now points smaller ka next to greater, if smaller != null

        if(sm!= nullptr){
            curr1->next = gr;
            return sm;
        }
        else{
            return gr;
        }
    }
};