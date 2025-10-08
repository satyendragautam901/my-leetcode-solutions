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


        vector<int>ar; // holds val of each list
        // first insert list1 val
        while(list1){
            ar.push_back(list1->val);
            list1 = list1->next;
        }

        // insert list2 val
        while(list2){
            ar.push_back(list2->val);
            list2 = list2->next;
        }

        sort(ar.begin(), ar.end());

        ListNode *newhead = nullptr;
        ListNode *curr = nullptr;
        for(int i = 0; i<ar.size(); i++){
            ListNode *temp = new ListNode(ar[i]);
            if(newhead == nullptr){
                newhead = temp;
                curr = temp;
            }
            else{
                curr->next = temp;
                curr = curr->next;
            }
        }

        return newhead;

    }
};