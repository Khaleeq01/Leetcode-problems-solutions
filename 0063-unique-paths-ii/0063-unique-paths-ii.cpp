class Solution {
public:
    int f(int m, int n, vector<vector<int>>& grid){
       vector<int>prev(n,0);
       for(int i=0;i<m;i++){
           vector<int>cur(n,0);
             for(int j=0;j<n;j++){
                 if(grid[i][j]==1) continue;
                 if(i==0 && j==0 ) cur[j]=1;
                 else{
                     int up=0,left=0;
                     if(i>0) up=prev[j];
                     if(j>0) left=cur[j-1];
                     
                     cur[j]=up+left;
                 }
             }
           prev=cur;
         }
         return prev[n-1];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        return f(m,n,grid);
    }
};