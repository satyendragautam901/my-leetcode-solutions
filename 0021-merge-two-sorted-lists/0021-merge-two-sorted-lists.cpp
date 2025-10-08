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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }
        ListNode *newhead = nullptr;
        ListNode *curr = nullptr;

        while(list1 && list2){
            // if both val are equal. 
            if(list1->val == list2->val){
                // i take list1->val you can take list2->val as well
                ListNode *temp = new ListNode(list1->val);
                list1 = list1->next;

                if(newhead == nullptr){
                    newhead = temp;
                    curr = temp;
                }
                else{
                    curr->next = temp;
                    curr = curr->next;
                }
                
            }
            else if(list1->val < list2->val){ // if list1 vali is smaller then take it
                ListNode *temp = new ListNode(list1->val);
                list1 = list1->next;

                if(newhead == nullptr){
                    newhead = temp;
                    curr = temp;
                }
                else{
                    curr->next = temp;
                    curr = curr->next;
                }
            }
            else{ // if list2 val is smaller then take it
                ListNode *temp = new ListNode(list2->val);
                list2 = list2->next;

                if(newhead == nullptr){
                    newhead = temp;
                    curr = temp;
                }
                else{
                    curr->next = temp;
                    curr = curr->next;
                }
            }
        }

        // if list1 have element then point to list1
        if(list1){
            curr->next = list1;
        } 
        // if list2 have element then point to list2
        if(list2){
            curr->next = list2;
        }
        

        return newhead;

    }
};