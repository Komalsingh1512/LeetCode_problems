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
    vector<int> ans;

    void solve(TreeNode* root, int level) {
        if (root == NULL) return;

        if (level == ans.size()) {
            ans.push_back(root->val);// it will check is the level or the size is equal, if yes then it will add the value to the ans
        }

        solve(root->right, level + 1);// then it will add right value first 
        solve(root->left, level + 1);// here the size will be 2 but level will be 1 because of the root value and the right value, so left will will not be added to the 
    }

    vector<int> rightSideView(TreeNode* root)  {
        solve(root, 0);// we return what we have in the parameters thats why here we have return the root and the level value.
        return ans;
    }
};