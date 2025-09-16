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
    
    ListNode* rotateRight(ListNode* head, int k) {
        // if (!head) return nullptr;
        // if(head->next==nullptr) return head;
        // if(k==0) return head;

        if(!head || head->next == nullptr || k == 0){
            return head; // endge case
        }
        
        ListNode *temp = head;
        int cnt = 0;
        // step1: first count the nodes
        while(temp){
            cnt++;
            temp = temp->next;
        }
        // now adjust k 
        k = k % cnt;
        if (k == 0) return head; // agar k list ke length ka multiple ho

        // step2: go to at that location
        int stepsToGo = cnt-k;
        temp = head;

        for(int i = 0; i<stepsToGo-1; i++){ // -1 bcz tail reach to next one
            temp = temp->next; 
        }
        // tilll here temp will points to at that location from where it needs to break;
        
        // create another node that go till end
        ListNode *newTemp = temp;
        
        // step3: now move to newtemp till it reach to ends
        while(newTemp->next != nullptr){
            newTemp = newTemp->next;
        }
        cout<<temp->val<<endl;
        cout<<newTemp->val;

        // step 4: break from temp and points newtemp to head;
        ListNode *newHead = temp->next;
        temp->next = nullptr;

        newTemp->next = head;


        return newHead;
    }
};