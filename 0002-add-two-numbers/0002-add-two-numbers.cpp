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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0; 
        ListNode* head = nullptr;// points to head of the result node
        ListNode* ptr = nullptr; // points to current node

        // jab tak dono node exist krte ho
        while(l1 && l2){
            long long ans = l1->val + l2->val + carry; // pehle add kro both val ko
            

            ListNode *temp = new ListNode(ans % 10); // ek nya node create kro 
            carry = ans / 10; // carry ko update kro

            if(head == nullptr){ // pehle node ke liye temp ko point kro
                head = temp;
                ptr = temp;
            }
            else{
                ptr->next = temp; // ptr ke next ko temp ko point kro
                ptr = ptr->next;
            }

            l1 = l1->next;
            l2 = l2->next;

        }
        // jab ek node exist krta ho 
        
        // if l1 exist
        while(l1){
            long long ans = l1->val + carry; // pehle add kro both val ko
            

            ListNode *temp = new ListNode(ans % 10); // ek nya node create kro 
            carry = ans / 10; // carry ko update kro

            if(head == nullptr){ // pehle node ke liye temp ko point kro
                head = temp;
                ptr = temp;
            }
            else{
                ptr->next = temp; // ptr ke next ko temp ko point kro
                ptr = ptr->next;
            }

            l1 = l1->next;
        }
        // if l2 exist
        while(l2){
           
            long long ans = l2->val + carry; // pehle add kro both val ko
            

            ListNode *temp = new ListNode(ans % 10); // ek nya node create kro 
            carry = ans / 10; // carry ko update kro

            if(head == nullptr){ // pehle node ke liye temp ko point kro
                head = temp;
                ptr = temp;
            }
            else{
                ptr->next = temp; // ptr ke next ko temp ko point kro
                ptr = ptr->next;
            }

            l2 = l2->next;

        }
        // Agar carry abhi bhi bacha ho
        if(carry){
            ListNode *temp = new ListNode(carry);
            ptr->next = temp;
        }
        return head;
    }
};