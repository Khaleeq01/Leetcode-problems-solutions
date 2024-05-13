class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=n*(1<<(m-1-0));
        for(int j=1;j<m;j++){
            int colCount=0;
            for(int i=0;i<n;i++)
                colCount+=grid[i][0]==0?(grid[i][j]^1):grid[i][j];
            if(colCount<n-colCount){
                ans+=(n-colCount)*(1<<(m-1-j));
            }
            else{
                ans+=(colCount)*(1<<(m-1-j));
            }
        }
        return ans;
    }
};