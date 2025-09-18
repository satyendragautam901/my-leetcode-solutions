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
    bool pal(vector<int>&ar){
        int n = ar.size()-1;
        int i = 0;
        while(i<n){
            if(ar[i] != ar[n]){
                return false;
            }
            i++, n--;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        if(!head){ // edge case
            return false;
        }
        if(head->next == nullptr){
            return true;
        }

        // create an vector to store val
        vector<int> value;

        ListNode *temp = head;
        while(temp){
            value.push_back(temp->val);
            temp = temp->next;
        } // now temp will be on last node
        for(auto a: value){
            cout<<a<<" ";
        }

        // call the function 
        return pal(value);
        
    }
};