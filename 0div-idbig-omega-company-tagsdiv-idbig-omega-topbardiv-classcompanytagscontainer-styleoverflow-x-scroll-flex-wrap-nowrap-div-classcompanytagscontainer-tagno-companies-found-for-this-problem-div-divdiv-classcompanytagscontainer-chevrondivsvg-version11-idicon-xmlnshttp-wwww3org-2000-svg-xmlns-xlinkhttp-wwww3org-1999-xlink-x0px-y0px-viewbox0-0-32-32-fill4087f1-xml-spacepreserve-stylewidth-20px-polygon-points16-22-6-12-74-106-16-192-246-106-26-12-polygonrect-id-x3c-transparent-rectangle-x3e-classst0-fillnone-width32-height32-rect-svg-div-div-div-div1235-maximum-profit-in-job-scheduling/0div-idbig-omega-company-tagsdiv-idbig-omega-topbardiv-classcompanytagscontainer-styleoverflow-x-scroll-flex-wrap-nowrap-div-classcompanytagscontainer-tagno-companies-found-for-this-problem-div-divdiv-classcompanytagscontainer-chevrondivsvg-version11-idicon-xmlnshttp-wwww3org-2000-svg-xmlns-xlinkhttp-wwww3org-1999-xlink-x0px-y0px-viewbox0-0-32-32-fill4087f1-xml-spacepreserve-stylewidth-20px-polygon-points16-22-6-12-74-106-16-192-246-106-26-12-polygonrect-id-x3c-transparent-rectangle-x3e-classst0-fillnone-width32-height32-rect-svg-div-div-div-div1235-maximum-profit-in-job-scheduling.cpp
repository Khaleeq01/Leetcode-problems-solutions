class Solution {
public:
    int solve(vector<vector<int>>& jobs,vector<int>& start,int n,int ind,vector<int>& dp){
        if(ind==n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int nextIndex=lower_bound(start.begin(),start.end(),jobs[ind][1])-start.begin();
        int maxProfit=max(solve(jobs,start,n,ind+1,dp),jobs[ind][2]+solve(jobs,start,n,nextIndex,dp));
        return dp[ind]=maxProfit;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
       int n=profit.size();
        vector<vector<int>>jobs;
        vector<int>dp(n,-1);
        for(int i=0;i<n;i++){
            jobs.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        sort(startTime.begin(),startTime.end());
        return solve(jobs,startTime,n,0,dp);
    }
};