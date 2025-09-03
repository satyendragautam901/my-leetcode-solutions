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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr){ // if head is null
            return head;
        }
        if(head->next==nullptr){// if single node
            return head;
        }
        int n = 0; // count number of nodes
        ListNode *temp = head;

        while(temp){
            n++;
            temp = temp->next;
        }
        
        // now start moving from start to n/2 + 1
        temp = head;

        n = n/2+1;
        cout<<n;
        int i = 1;
        while(i<n){
            temp = temp->next;
            i++;
        }

        return temp;
    }
};