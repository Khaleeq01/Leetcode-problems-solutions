int dirs[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int low=0,high=n*n-1;
        while(low<high){
             int mid=(low+high)/2;
           vector<vector<int>>visited(n,vector<int>(n,0));
            if(reachableOrNot(mid,grid,n,0,0,visited)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    int reachableOrNot(int t,vector<vector<int>>& grid,int n,int i,int j,vector<vector<int>>& visited){
        if(i==n-1 && j==n-1){
            return true;
        }
        visited[i][j]=1;
        for(auto dir:dirs){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            if(new_i>=0 && new_i<n && new_j>=0 && new_j<n && !visited[new_i][new_j] && grid[i][j]<=t && grid[new_i][new_j]<=t){
                if(reachableOrNot(t,grid,n,new_i,new_j,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};