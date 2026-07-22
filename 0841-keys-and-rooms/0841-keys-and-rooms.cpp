class Solution {
public:
// done using dfs... 
    void dfs(int node, vector<int> &visited, vector<vector<int>> &adj) {

        visited[node] = 1;

        for (int adjNode : adj[node]) {
            if (!visited[adjNode]) {
                dfs(adjNode, visited, adj);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int v = rooms.size();

        // Create adjacency list
        vector<vector<int>> adj(v);

        for (int i = 0; i < v; i++) {
            for (int j = 0; j < rooms[i].size(); j++) {
                int b = rooms[i][j];
                adj[i].push_back(b);
            }
        }

        vector<int> visited(v, 0);

        // Start DFS from room 0
        dfs(0, visited, adj);

        // Check if all rooms are visited
        for (int i = 0; i < v; i++) {
            if (!visited[i]) {
                return false;
            }
        }

        return true;
    }
};