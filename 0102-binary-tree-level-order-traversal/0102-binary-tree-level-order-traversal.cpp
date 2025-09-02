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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) {
            return ans;
        }

        queue<TreeNode*> q; // this is queue to store address of parent
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size(); // check kitna level hai
            vector<int> item;         // is level pe items

            for (int i = 0; i < levelSize; i++) {
                TreeNode* temp = q.front();
                q.pop();

                item.push_back(temp->val); // insert to temporary item array

                // if left exist
                if (temp->left) {
                    q.push(temp->left);
                }

                // if right exist
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            ans.push_back(item); // after completing level push into ans
        }

        return ans;
    }
};