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
//just find the max length of the tree and this is done by making another maxdepth function after that just calculate the abs of left--right, if it is small than 1 then true else false 
    int maxDepth(TreeNode*  root){
        if(root == NULL){
            return 0;
        }
        return  max(maxDepth(root->left), maxDepth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int left= maxDepth(root->left);
        int right= maxDepth(root->right);
        if(abs(left-right)>1){
            return false;
        }
        return isBalanced (root->left) && isBalanced(root->right);// here we are checking is our left or right subtree is balanced or not 
    }
};