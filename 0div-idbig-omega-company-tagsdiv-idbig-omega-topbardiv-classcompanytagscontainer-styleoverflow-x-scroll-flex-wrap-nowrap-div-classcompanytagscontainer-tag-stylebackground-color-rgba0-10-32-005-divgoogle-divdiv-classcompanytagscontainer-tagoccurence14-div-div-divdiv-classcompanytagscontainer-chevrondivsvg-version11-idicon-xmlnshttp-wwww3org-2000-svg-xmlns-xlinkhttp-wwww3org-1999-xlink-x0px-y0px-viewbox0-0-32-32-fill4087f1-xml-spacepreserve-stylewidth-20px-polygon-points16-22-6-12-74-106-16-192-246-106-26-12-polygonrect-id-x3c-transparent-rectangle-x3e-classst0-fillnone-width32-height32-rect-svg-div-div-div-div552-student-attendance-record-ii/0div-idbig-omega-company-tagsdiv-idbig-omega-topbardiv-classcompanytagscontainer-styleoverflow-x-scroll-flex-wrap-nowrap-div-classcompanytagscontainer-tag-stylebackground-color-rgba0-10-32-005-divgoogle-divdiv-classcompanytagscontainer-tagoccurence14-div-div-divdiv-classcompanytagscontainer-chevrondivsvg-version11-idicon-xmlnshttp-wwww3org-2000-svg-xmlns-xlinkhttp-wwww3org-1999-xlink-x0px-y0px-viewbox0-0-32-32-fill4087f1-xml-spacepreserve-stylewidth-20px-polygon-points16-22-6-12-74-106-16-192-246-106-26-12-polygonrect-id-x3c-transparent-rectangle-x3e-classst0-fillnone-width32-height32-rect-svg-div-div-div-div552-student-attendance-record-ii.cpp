#define mod 1000000007
#define ll long long int

class Solution {
public:
    ll dp[100001][3][3];
    
    ll solve(int n, int absentCount, int consecuLateCount) {
        if (n == 0) return 1;
        if (dp[n][absentCount][consecuLateCount] != -1)
            return dp[n][absentCount][consecuLateCount];
        
        ll ans = 0;
        // P today
        ans = (solve(n - 1, absentCount, 0)) % mod;
        // A today, only 1 absent is allowed
        if (absentCount < 1)
            ans += (solve(n - 1, absentCount + 1, 0)) % mod;
        // L today, only 2 days late allowed
        if (consecuLateCount < 2)
            ans += ( solve(n - 1, absentCount, consecuLateCount + 1)) % mod;
        
        return dp[n][absentCount][consecuLateCount] = ans % mod;
    }
    
    int checkRecord(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(n, 0, 0);
    }
};
