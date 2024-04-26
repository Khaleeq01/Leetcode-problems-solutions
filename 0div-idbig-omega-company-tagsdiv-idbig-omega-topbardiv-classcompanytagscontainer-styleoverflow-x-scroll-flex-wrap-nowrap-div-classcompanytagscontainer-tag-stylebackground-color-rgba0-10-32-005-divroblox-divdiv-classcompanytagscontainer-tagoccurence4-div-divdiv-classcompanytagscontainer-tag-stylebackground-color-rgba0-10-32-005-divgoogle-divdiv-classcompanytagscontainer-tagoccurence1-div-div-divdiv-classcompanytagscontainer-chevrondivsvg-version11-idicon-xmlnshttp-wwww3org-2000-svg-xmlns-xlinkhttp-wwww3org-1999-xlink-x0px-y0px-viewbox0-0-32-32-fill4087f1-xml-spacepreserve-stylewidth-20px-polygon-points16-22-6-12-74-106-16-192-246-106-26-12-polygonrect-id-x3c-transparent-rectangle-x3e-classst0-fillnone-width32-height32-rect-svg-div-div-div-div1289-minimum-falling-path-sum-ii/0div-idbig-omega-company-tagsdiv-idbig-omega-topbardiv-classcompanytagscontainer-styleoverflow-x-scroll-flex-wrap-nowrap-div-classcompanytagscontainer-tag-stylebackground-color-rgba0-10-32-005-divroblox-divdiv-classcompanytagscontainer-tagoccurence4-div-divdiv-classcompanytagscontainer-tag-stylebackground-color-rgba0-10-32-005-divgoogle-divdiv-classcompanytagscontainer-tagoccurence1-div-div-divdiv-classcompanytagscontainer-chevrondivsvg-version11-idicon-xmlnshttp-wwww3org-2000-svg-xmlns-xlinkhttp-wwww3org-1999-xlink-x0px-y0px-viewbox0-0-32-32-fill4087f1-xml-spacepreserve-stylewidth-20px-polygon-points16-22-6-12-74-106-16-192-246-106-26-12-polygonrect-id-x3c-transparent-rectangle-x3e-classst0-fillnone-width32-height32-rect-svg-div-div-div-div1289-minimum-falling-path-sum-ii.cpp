class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        int n=grid.size();
        if(i==0) return grid[i][j];
        //out of bound case
        if(i<0 || j<0 || j>=n) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int mini=1e9;
        for(int k=0;k<n;k++){
            // such that no two elements chosen in adjacent rows are in the same column.
            if(k!=j){
                mini=min(mini,grid[i][j]+solve(i-1,k,grid,dp));
            }
        }
        return dp[i][j]=mini;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int mini=1e9;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        for(int j=0;j<n;j++){
            mini=min(mini,solve(n-1,j,grid,dp));
        }
        return mini;
    }
};