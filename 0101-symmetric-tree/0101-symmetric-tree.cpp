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
    bool checkMirror(TreeNode* left, TreeNode* right) {
        // Base case: both are null
        if (!left && !right) {
            return true;
        }
        
        // If one is null and other is not, they can't be mirror
        if (!left || !right) {
            return false;
        }
        
        // Check current nodes' values
        if (left->val != right->val) {
            return false;
        }
        
        // Recursively check:
        // left's left with right's right AND left's right with right's left
        return checkMirror(left->left, right->right) && 
               checkMirror(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return checkMirror(root->left, root->right);
    }
};