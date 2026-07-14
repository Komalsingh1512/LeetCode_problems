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
// in maxdepth we are just comparing the max value but here we need to update the minvalue of right or left when the other is null 
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL){// when left will be null we will add 1 to the right 
            return minDepth(root->right)+1;
        }
        if(root->right == NULL){// when right will be null we will add 1 to the left 
            return minDepth(root->left)+1;
        }
        return min(minDepth(root->left), minDepth(root->right))+1;
    }
};