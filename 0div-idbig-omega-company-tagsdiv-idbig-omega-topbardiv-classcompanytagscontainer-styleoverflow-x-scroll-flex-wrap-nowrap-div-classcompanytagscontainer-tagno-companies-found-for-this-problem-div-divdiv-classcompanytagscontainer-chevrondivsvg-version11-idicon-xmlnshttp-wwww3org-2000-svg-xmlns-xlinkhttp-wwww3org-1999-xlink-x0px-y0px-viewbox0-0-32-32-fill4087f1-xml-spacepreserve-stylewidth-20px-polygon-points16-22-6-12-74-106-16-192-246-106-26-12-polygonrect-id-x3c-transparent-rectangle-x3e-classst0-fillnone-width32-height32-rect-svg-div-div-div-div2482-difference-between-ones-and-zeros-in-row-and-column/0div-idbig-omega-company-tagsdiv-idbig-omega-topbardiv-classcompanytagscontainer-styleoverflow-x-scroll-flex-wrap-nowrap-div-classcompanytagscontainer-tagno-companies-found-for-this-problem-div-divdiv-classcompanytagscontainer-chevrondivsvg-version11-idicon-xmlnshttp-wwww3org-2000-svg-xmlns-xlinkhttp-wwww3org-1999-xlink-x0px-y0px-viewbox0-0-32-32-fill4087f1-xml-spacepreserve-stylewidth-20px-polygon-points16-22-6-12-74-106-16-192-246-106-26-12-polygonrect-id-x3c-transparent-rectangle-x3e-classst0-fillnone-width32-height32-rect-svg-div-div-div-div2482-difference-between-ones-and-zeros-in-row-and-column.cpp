class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>onesRows(m,0);
        vector<int>onesCols(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              onesRows[i]+=grid[i][j];
                onesCols[j]+=grid[i][j];
            }
        }
        vector<vector<int>>diff(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diff[i][j]=2*onesRows[i]+2*onesCols[j]-n-m;
            }
        }
        return diff;
    }
};