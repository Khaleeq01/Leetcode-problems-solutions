class Solution {
    long long res=0;
    long long dfs(vector<vector<int>>& graph,int node,int seats,vector<int>& vis){
        vis[node]=1;
        int num=1;
        for(auto child:graph[node]){
            if(!vis[child]){
                num+=dfs(graph,child,seats,vis);
            }
        }
        res+=ceil(num*1.0/seats);
        return num;
    }
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size();
        vector<vector<int>>graph(n+1);
        for(int i=0;i<n;i++){
            graph[roads[i][0]].push_back(roads[i][1]);
            graph[roads[i][1]].push_back(roads[i][0]);
        }
        vector<int>vis(n+1,0);
        vis[0]=1;
        for(auto child:graph[0]){
            dfs(graph,child,seats,vis);
        }
        return res;
    }
};