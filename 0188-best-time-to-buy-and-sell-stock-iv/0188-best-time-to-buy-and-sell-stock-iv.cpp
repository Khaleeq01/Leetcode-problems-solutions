class Solution {
public:
    int solve(int index,int operationNo,int k,vector<int>& prices,vector<vector<int>>& dp){
        if(index==prices.size())
            return 0;
        if(operationNo==2*k)
            return 0;
        if(dp[index][operationNo]!=-1)
            return dp[index][operationNo];
        int profit=0;
        if(operationNo%2==0){
            //buy is allowed
            int buy=-prices[index]+solve(index+1,operationNo+1,k,prices,dp);
            int skip=0+solve(index+1,operationNo,k,prices,dp);
            profit=max(buy,skip);
        }
        else{
            int sell=prices[index]+solve(index+1,operationNo+1,k,prices,dp);
            int skip=0+solve(index+1,operationNo,k,prices,dp);
            profit=max(sell,skip);
        }
        return dp[index][operationNo]= profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2*k,-1));
      return solve(0,0,k,prices,dp);
    }
};