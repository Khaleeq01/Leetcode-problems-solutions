class Solution {
public:
    int mod=1e9+7;
    int numRollsToTarget(int n, int k, int t) {
        vector<vector<int>>dp(n+1,vector<int>(t+1,0));
        //base case
        dp[0][0]=1;
        for(int dice=1;dice<=n;dice++){
            for(int target=1;target<=t;target++){
                long long ans=0;
        for(int i=1;i<=k;i++){
            if(target-i>=0)
            ans+=dp[dice-1][target-i];
        }
         dp[dice][target]=ans%mod;
            }
        }
        return dp[n][t];
    }
};