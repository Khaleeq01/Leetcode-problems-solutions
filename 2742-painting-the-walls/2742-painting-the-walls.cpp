class Solution {
public:
    int dp[501][501]={};
    int solve(vector<int>& cost, vector<int>& time,int i,int wallRemaining){
        if(wallRemaining<=0) return 0;
        if(i>=cost.size()) return 1000000000;
        if(dp[i][wallRemaining]!=0) return dp[i][wallRemaining];
        int notTake=solve(cost,time,i+1,wallRemaining);
        int take=cost[i]+solve(cost,time,i+1,wallRemaining-time[i]-1);
        return dp[i][wallRemaining]=min(notTake,take);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        return solve(cost,time,0,time.size());
    }
};