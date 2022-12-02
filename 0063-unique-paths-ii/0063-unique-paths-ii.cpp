class Solution {
public:
    int f(int m, int n, vector<vector<int>>& grid){
         vector<vector<int>>dp(m,vector<int>(n,0));
       for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                 if(grid[i][j]==1) continue;
                 if(i==0 && j==0 ) dp[i][j]=1;
                 else{
                     int up=0,left=0;
                     if(i>0) up=dp[i-1][j];
                     if(j>0) left=dp[i][j-1];
                     
                     dp[i][j]=up+left;
                 }
             }
         }
         return dp[m-1][n-1];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        return f(m,n,grid);
    }
};