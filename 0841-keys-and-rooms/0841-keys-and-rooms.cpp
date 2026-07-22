class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int v = rooms.size();
        vector<vector<int>> adj(v);

        // Create adjacency list
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < rooms[i].size(); j++) {
                int b = rooms[i][j];
                adj[i].push_back(b);     // changed
            }
        }

        vector<int> visited(v, 0);

        queue<int> q;

        int start = 0;
        q.push(start);
        visited[start] = 1;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            for (int adjNode : adj[node]) {

                if (!visited[adjNode]) {
                    visited[adjNode] = 1;
                    q.push(adjNode);
                }
            }
        }

        for (int i = 0; i < v; i++) {
            if (!visited[i])
                return false;
        }

        return true;
    }
};