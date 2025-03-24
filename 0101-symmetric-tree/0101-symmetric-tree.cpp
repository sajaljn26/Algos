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
     bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;  // Both are null, so they are symmetric
        if (!t1 || !t2) return false; // If one is null and the other isn't, not symmetric

        return (t1->val == t2->val) && // Check values
               isMirror(t1->left, t2->right) && // Check left subtree of t1 with right subtree of t2
               isMirror(t1->right, t2->left);   // Check right subtree of t1 with left subtree of t2
    }
    bool isSymmetric(TreeNode* root) {
        // bool checking the symmetry 
        if(!root){
            return true;
        }
        return isMirror(root->left,root->right);

        
    }
};