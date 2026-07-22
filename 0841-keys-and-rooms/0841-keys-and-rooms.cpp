#include <vector>
#include <queue>
using namespace std;

class Solution {
public:

//done using bfs -> making list is not necessary in this question
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int v = rooms.size();

        // rooms itself is the adjacency list
        vector<int> vis(v, 0);

        queue<int> q;

        q.push(0);
        vis[0] = 1;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            for (int adjNode : rooms[node]) {

                if (!vis[adjNode]) {
                    vis[adjNode] = 1;
                    q.push(adjNode);
                }
            }
        }

        // Check if every room was visited
        for (int i = 0; i < v; i++) {
            if (!vis[i])
                return false;
        }

        return true;
    }
};