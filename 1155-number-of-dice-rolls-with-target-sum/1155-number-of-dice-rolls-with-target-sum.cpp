class Solution {
public:
    int mod=1e9+7;
    int solve(int dice,int faces,int target,vector<vector<int>> &dp){
        //base case
        if(target<0)
            return 0;
        if(dp[dice][target]!=-1)
            return dp[dice][target];
        if(dice==0 && target!=0)
            return 0;
        if(dice!=0 && target==0)
            return 0;
        if(dice==0 && target==0)
            return 1;
        long long ans=0;
        for(int i=1;i<=faces;i++){
            ans+=solve(dice-1,faces,target-i,dp);
        }
        return dp[dice][target]=(ans)%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return solve(n,k,target,dp);
    }
};