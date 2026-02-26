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
    int getDecimalValue(ListNode* head) {
        string ans = "";
        while(head){
            ans += to_string(head->val);
            head = head->next;
        }
        cout<<ans<<endl;


        int n = ans.size();
        int ans_ = 0;
        int temp = 0;
        for(int i = n-1; i>=0 ;i--){
            if(ans[i] == '1'){
                ans_ = ans_ + (ans[i] - '0') * pow(2,temp);
            }
            temp++;
        }

        return ans_;
    }
};