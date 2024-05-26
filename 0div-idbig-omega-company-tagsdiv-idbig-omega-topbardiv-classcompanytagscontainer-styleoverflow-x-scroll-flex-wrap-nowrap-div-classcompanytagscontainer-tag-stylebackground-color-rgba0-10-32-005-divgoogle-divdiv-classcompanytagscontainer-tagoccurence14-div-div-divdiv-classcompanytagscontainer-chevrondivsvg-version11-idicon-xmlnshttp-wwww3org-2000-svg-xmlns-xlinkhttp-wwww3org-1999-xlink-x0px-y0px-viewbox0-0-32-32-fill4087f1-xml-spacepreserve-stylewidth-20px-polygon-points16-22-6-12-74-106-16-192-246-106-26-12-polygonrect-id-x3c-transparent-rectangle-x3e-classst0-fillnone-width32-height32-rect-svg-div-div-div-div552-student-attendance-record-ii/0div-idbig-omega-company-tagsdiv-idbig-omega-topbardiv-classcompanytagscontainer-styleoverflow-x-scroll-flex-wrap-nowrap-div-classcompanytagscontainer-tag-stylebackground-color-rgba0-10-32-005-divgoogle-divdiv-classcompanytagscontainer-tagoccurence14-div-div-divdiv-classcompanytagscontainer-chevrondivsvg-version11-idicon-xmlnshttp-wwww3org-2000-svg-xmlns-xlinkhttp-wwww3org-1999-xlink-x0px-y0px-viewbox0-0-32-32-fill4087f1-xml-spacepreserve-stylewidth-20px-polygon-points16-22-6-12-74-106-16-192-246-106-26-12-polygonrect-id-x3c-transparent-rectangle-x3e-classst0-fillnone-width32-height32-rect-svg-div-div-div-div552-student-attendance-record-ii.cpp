#define mod 1000000007
#define ll long long int

class Solution {
public:
    
    ll solve(int n, int absentCount, int consecuLateCount,vector<vector<vector<ll>>> &dp) {
        if (n == 0) return 1;
        if (dp[n][absentCount][consecuLateCount] != -1)
            return dp[n][absentCount][consecuLateCount];
        
        ll ans = 0;
        // P today
        ans += (solve(n - 1, absentCount, 0,dp)) % mod;
        // A today, only 1 absent is allowed
        if (absentCount < 1)
            ans += (solve(n - 1, absentCount + 1, 0,dp)) % mod;
        // L today, only 2 days late allowed
        if (consecuLateCount < 2)
            ans += ( solve(n - 1, absentCount, consecuLateCount + 1,dp)) % mod;
        
        return dp[n][absentCount][consecuLateCount] = ans % mod;
    }
    
    int checkRecord(int n) {
      vector<vector<vector<ll>>>dp(n+1,vector<vector<ll>>(2,vector<ll>(3,-1)));
        return solve(n, 0, 0,dp);
    }
};
