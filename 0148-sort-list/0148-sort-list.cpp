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
    ListNode* sortList(ListNode* head) {
        if(!head)
            return head;

        if(!head->next)
            return head;

        ListNode *temp = head;
        vector<int> ans;
        while(temp){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        sort(ans.begin(), ans.end());

        temp = head;
        ListNode *newhead = nullptr;
        ListNode *cur = nullptr;

        for(int i = 0; i<ans.size(); i++){
            ListNode *newnode = new ListNode(ans[i]);

            if(newhead == nullptr){
                newhead = newnode;
                cur = newhead;
            }
            else{
                cur->next = newnode;
                cur = newnode;
            }
        }
        
        return newhead;
    }
};