class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2*k+1,0));
        int profit=0;
        for(int index=n-1;index>=0;index--){
            for(int operationNo=0;operationNo<2*k;operationNo++){
                if(operationNo%2==0){
            //buy is allowed
            int buy=-prices[index]+dp[index+1][operationNo+1];
            int skip=0+dp[index+1][operationNo];
            profit=max(buy,skip);
        }
        else{
            int sell=prices[index]+dp[index+1][operationNo+1];
            int skip=0+dp[index+1][operationNo];
            profit=max(sell,skip);
           }
         dp[index][operationNo]= profit;
             }
            }
      return dp[0][0];
    }
};