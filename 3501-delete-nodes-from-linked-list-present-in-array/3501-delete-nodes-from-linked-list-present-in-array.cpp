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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            if (st.find(curr->val) != st.end()) {
                ListNode* nextNode = curr->next;
                prev->next = nextNode;
                //delete curr; // Correctly delete the removed list node
                curr = nextNode;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        if(dummy->next){
            head = dummy->next;
        delete dummy; // This ensures the dummy node is deleted *by you*
        return head;  // Return the actual head of the modified list
        }
        
        return nullptr;
    }
};