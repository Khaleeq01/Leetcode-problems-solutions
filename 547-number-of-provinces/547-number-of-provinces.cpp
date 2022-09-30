class Solution {
    private:
    void dfs(int node,vector<int>& visited,vector<int>adjList[]){
        visited[node]=1;
        for(auto it:adjList[node]){
            if(!visited[it]){
                dfs(it,visited,adjList);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       int v=isConnected.size();
        vector<int>visited(v,0);
        vector<int>adjList[v];
        //converting adjmatrix to list
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                //self nodes are not consider
                if(isConnected[i][j]==1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<v;i++){
            if(visited[i]==0){
                count++;
                dfs(i,visited,adjList);
            }
        }
        return count;
    }
};