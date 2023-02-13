class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxi=0;
      vector<int>curr(m+1,0),next(m+1,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
        int right = curr[j+1];
        int diagonal = next[j+1];
        int down = next[j];
        if(matrix[i][j] == '1'){
            int ans = 1 + min(right, min(diagonal, down));
            maxi = max(maxi, ans);
            curr[j]=ans;
        }
        else
             curr[j]= 0;
            }
            next=curr;
        }
        return maxi*maxi;
    }
};