class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<int> adj[numCourses];

        // Build the graph
        for (int i = 0; i < prerequisites.size(); i++) {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];

            // b -> a
            adj[b].push_back(a);
        }

        // Calculate indegree
        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            for (auto adjNode : adj[i]) {
                indegree[adjNode]++;
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

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            order.push_back(node);

            for (auto adjNode : adj[node]) {
                indegree[adjNode]--;

                if (indegree[adjNode] == 0) {
                    q.push(adjNode);
                }
            }
        }

        return order.size() == numCourses;
    }
};