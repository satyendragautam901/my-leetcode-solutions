/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;
    
    set<ListNode *>visited;// create unique node


    while(head){
        // agar head pehle se aaya hai to return true: means cycle present
        if(visited.count(head)){// here find can't be used . bcz find used for only integer
            return true;
        }
        visited.insert(head); // nhi to head ko insert kr do

        head=head->next;
    }
     
     return false; 
    }
};