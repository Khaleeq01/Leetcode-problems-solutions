class Solution {
public:
    int dfs(int n,int m,vector<vector<int>>& grid,int i,int j,int prev){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]<=prev)
            return 0;
        int val=grid[i][j];
        grid[i][j]=0;
        int ans=max({dfs(n,m,grid,i-1,j+1,val),dfs(n,m,grid,i,j+1,val),dfs(n,m,grid,i+1,j+1,val)})+1;
        return ans;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),res=0;
        for(int i=0;i<n;i++){
            res=max(res,dfs(n,m,grid,i,0,INT_MIN));
        }
        return res-1;
    }
};