/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;          // dono null → same
        if(!p || !q) return false;         // ek null, ek non-null → not same
        if(p->val != q->val) return false; // values different → not same

        // recursively left and right subtree check karo
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};