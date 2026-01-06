/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        // create a queue to store address of child
        queue<TreeNode*> q;
        q.push(root);
        int currlevel = 1; // given that

        int ans = 0;
        int sum = INT_MIN;
        while (!q.empty()) {
            int qu_size = q.size();
            int temp_sum = 0;

            // traversing alll the elements of same level
            while (qu_size--) {

                TreeNode* temp = q.front();
                q.pop();
                temp_sum += temp->val;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);

            }
                if (temp_sum > sum) {
                    sum = temp_sum;
                    ans = currlevel;
                }
            currlevel++;
        }
        return ans;
    }
};