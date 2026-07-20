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

 //this is the hard question first understand it by making the diagram and understand the workingor the logic before writing the whole code for this program
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        // column -> row -> multiset(values)
        map<int, map<int, multiset<int>>> mp;

        // {node, {column, row}}
        queue<pair<TreeNode*, pair<int, int>>> q;//pair take 2 values thats why we write rootnode and another pair for row and column

        q.push({root, {0, 0}});// now its size is 1

        while (!q.empty()) {
            auto front = q.front();
            q.pop();

            TreeNode* node = front.first;
            int col = front.second.first;
            int row = front.second.second;

            mp[col][row].insert(node->val);

            if (node->left)
                q.push({node->left, {col - 1, row + 1}});

            if (node->right)
                q.push({node->right, {col + 1, row + 1}});
        }

        vector<vector<int>> ans;

        for (auto &col : mp) {// this is for iterating column 

            vector<int> temp;

            for (auto &row : col.second) {// this is for iterating row

                for (auto val : row.second) {// this is or iterating values 
                    temp.push_back(val);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};