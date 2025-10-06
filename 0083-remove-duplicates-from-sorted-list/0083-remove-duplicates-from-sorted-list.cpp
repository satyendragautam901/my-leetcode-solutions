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

        if(!head){// if null
            return head;
        }
        if(!head->next){// if single node
            return head;
        }
        ListNode *pre = head;
        ListNode *fut = head->next;

        // if 3 nodes


        while(fut)
        {   
            if(pre->val == fut->val){
                pre->next = fut->next;
                
                delete fut;
                fut = pre->next;
            }
            else{
                pre = fut;
                fut = fut->next;
            }
        }


        return head;
        
    }
};