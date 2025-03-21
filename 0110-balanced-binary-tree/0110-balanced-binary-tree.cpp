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
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1 + max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int le = height(root->left);
        int re = height(root->right);
        if(abs(le - re) > 1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};