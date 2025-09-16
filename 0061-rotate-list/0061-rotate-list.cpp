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
    void rotate(vector<int>& ar, int k) {
        int n = ar.size();
        k = k % n;

        while (k>0)
        {
            int temp = ar[n - 1];

            for (int i = n - 1; i > 0; i--)
            {
                ar[i] = ar[i - 1];
            }
            ar[0] = temp;

            k--;
        }

    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return nullptr;

        ListNode *temp = head;
        vector<int>ar;

        while(temp){ // first push the value to array
            ar.push_back(temp->val);
            temp = temp->next;
        }
        for(auto a: ar){
            cout<<a<<" ";
        }
        k = k % ar.size();
        rotate(ar, k); // reverse array by k position
        // create a list and return;
        cout<<endl;
        for(auto a: ar){
            cout<<a<<" ";
        }

        ListNode *ptr = nullptr; // points to newly formed list
        ListNode *curr = nullptr;

        for(int i =0; i<ar.size(); i++){
            ListNode *temppp = new ListNode(ar[i]); // new node created with the value
            if(ptr == nullptr){
                ptr = temppp;
                curr = temppp;
            }
            else{
                curr->next = temppp;
                curr = curr->next;
            }
        }

        return ptr;
    }
};