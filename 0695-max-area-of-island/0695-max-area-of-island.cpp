class Solution {
public:
//hard one try gaian, and it is similar to 200
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        int maxArea = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    maxArea = max(maxArea, dfs(grid, i, j));
                }
            }
        }

        return maxArea;
    }

private:
    int dfs(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 1) {
            return 0;
        }
        grid[i][j] = 0;   // mark as visited

        int count = 1;    // current cell

        count += dfs(grid, i + 1, j); // down
        count += dfs(grid, i - 1, j); // up
        count += dfs(grid, i, j + 1); // right
        count += dfs(grid, i, j - 1); // left

        return count;
    }
};   

