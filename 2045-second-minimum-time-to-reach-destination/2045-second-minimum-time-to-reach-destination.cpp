class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>>adj(n+1);
         // Build the adjacency list
        for(auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        queue<pair<int,int>>q;
        vector<int>dist1(n+1,-1),dist2(n+1,-1);
        // Start with node 1, with its minimum distance
        q.push({1,1});
        dist1[1]=0;
        while(!q.empty()){
            auto[node,freq]=q.front();
            q.pop();
            int timeTaken=freq==1?dist1[node]:dist2[node];
                 // If the timeTaken falls under the red bracket, wait till the path turns green.
            if((timeTaken/change)%2){
                timeTaken=change*(timeTaken/change+1)+time;
            }
            else{
                timeTaken+=time;
            }
            for(auto &neighbour:adj[node]){
                if(dist1[neighbour]==-1){
                    dist1[neighbour]=timeTaken;
                    q.push({neighbour,1});
                }
                else if(dist2[neighbour]==-1 && dist1[neighbour]!=timeTaken){
                    if(neighbour==n) return timeTaken;
                    dist2[neighbour]=timeTaken;
                    q.push({neighbour,2});
                }
            }
        }
        return 0;
    }
};