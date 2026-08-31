class Solution {
public:

    void solve(int idx, vector<int>& candidates, int target,
               vector<vector<int>>& ans, vector<int>& output) {

        // Base Case
        if (idx >= candidates.size()) {

            if (target == 0)
                ans.push_back(output);

            return;
        }

        // Include
        if (candidates[idx] <= target) {

            output.push_back(candidates[idx]);

            solve(idx, candidates, target - candidates[idx], ans, output);

            output.pop_back();
        }

        // Exclude
        solve(idx + 1, candidates, target, ans, output);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> output;

        solve(0, candidates, target, ans, output);

        return ans;
    }
};