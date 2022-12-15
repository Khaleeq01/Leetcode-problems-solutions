class Solution {
public:
int coinChange(vector<int>& coins,int ind,int T,vector<vector<int>>& dp){
    if(ind==0){
        return (T%coins[0]==0);
    }
    if (dp[ind][T]!=-1)
        return dp[ind][T];
    int notTake=coinChange(coins,ind-1,T,dp);
    int take=0;
    if(coins[ind]<=T)
    take=coinChange(coins,ind,T-coins[ind],dp);
    return dp[ind][T]=(notTake+take);
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return coinChange(coins,n-1,amount,dp);
    }
};