class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<int> adj[numCourses];

        // Build the graph
        for (int i = 0; i < prerequisites.size(); i++) {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];

            adj[b].push_back(a);
        }
        // Calculate indegree
        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            for (auto neighbour : adj[i]) {
                indegree[neighbour]++;
            }
        }

        queue<int> q;

        // Push all nodes with indegree 0
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> order;

        // Kahn's Algorithm
        while (!q.empty()) {

            int node = q.front();
            q.pop();

            order.push_back(node);

            for (auto neighbour : adj[node]) {

                indegree[neighbour]--;

                if (indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        // If cycle exists
        if (order.size() != numCourses) {
            return {};
        }

        return order;
    }
};