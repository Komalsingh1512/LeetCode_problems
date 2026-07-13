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
// done using BFS
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        // we are using queue for storing every node value 
        queue<TreeNode*> q;
        q.push(root);// we are just stpring the first value to the queue

        while (!q.empty()) {
            int size = q.size();// it size depend on the level it is now 
            vector<int> temp;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();// first element of the queue will come here 
                q.pop();
                temp.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};

// pehle queue me root ko add kar denge , uske baad usko temp me add kar denge or pop karenge or check karnge ki kya uske left right me kuch hai aagar hai to usko queue me add kar denge, phi same process chalega queue me jo element hai wo temp me add hoga phir wo queue se pop hoga or left right me koi element hai ya nhi usko check karega 