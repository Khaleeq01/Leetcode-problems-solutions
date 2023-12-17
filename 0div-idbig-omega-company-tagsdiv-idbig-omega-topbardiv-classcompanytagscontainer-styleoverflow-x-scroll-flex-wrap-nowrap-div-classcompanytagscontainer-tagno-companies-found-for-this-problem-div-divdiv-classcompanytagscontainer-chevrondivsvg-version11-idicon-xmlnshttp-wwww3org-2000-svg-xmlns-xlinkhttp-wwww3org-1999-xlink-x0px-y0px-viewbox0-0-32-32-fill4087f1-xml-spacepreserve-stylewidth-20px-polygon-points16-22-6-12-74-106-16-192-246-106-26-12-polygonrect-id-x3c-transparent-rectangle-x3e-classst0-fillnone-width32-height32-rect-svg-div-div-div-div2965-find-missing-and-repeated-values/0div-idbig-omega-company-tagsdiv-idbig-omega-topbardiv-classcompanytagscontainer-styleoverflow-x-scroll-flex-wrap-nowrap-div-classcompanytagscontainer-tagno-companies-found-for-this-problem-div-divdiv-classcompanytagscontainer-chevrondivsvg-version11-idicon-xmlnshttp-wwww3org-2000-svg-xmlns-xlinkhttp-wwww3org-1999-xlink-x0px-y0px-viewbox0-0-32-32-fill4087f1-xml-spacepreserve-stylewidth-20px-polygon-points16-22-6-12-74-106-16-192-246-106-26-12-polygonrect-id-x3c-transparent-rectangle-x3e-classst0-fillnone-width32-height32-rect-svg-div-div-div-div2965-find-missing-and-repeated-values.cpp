class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans(2);
        vector<int>count(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            //for repeated number
            if(count[i]==2){
                ans[0]=i;
            }
            //for missing number 
            if(count[i]==0){
                ans[1]=i;
            }
        }
        return ans;
    }
};