class Solution {
public:
    void dfs(vector<vector<int>>& edges,int i,int &par,vector<vector<int>> &ans,vector<bool> &vis){
        if(vis[i]==true) return;
        vis[i]=true;
        if(i!=par) ans[i].push_back(par);
        for(auto &curr:edges[i])
            dfs(edges,curr,par,ans,vis);
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        //create adj list and ans to store answer
        vector<vector<int>>adj(n),ans(n);
        for(auto i:edges) adj[i[0]].push_back(i[1]);
        for(int i=0;i<n;i++){
            vector<bool>vis(n,false);
            dfs(adj,i,i,ans,vis);
        }
        return ans;
    }
};