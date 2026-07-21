class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        // Step 1: Create adjacency list
        vector<vector<int>> adj(n);

        for (auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        // Step 2: BFS
        vector<bool> visited(n, false);
        queue<int> q;

        q.push(source);
        visited[source] = true;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            if (node == destination)
                return true;

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return false;
    }
};