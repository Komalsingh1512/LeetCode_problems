class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<int>> adj[n];
        for(auto it: flights){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v,wt});
        }
        vector<int> dist(n,1e9);
        dist[src] = 0;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        pq.push({0,0,src});
        while(!pq.empty()){
            auto it= pq.top();
            int dis = it[1];
            int node = it[2];
            int idx = it[0];
            pq.pop();
            // to make sure we never go overboard the given number of steps
            if(idx>k) continue;
            for(auto it: adj[node]){
                int adjNode = it[0];
                int adjWt = it[1];
                // we check here for the minimum cost and also if it is possible in the given constraints
                if(adjWt + dis < dist[adjNode] && idx<=k){
                    dist[adjNode] = adjWt + dis;
                    pq.push({idx+1,adjWt+dis,adjNode});
                }
            }
        }
        if(dist[dst]!=1e9) return dist[dst];
        return -1;
    }
};