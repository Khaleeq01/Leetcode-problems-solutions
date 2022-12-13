class Solution {
public:
    int coinChangeUtil(vector<int>& coins,int ind,int amount,vector<vector<int>>& dp){
        if(ind==0){
            if(amount%coins[0]==0)
                return amount/coins[0];
            else return 1e9;
        }
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int notTaken=0+coinChangeUtil(coins,ind-1,amount,dp);
        int taken=1e9;
        if(coins[ind]<=amount)
            taken=1+coinChangeUtil(coins,ind,amount-coins[ind],dp);
        return dp[ind][amount]= min(notTaken,taken);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans=coinChangeUtil(coins,n-1,amount,dp);
        if (ans>=1e9)
            return -1;
        return ans;
    }
};