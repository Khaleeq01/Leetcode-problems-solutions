class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={-1,0,1,0};
    int dfs(int i,int j,vector<vector<int>>& grid){
        int n=grid.size(),m=grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0) return 0;
        int maxSum=0,curVal=grid[i][j];
        for(int d=0;d<4;d++){
            int ni=i+dx[d];
            int nj=j+dy[d];
            grid[i][j]=0;
            maxSum=max(maxSum,curVal+dfs(ni,nj,grid));
            grid[i][j]=curVal;
        }
        return maxSum;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans,dfs(i,j,grid));
            }
        }
        return ans;
    }
};