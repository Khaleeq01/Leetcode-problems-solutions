class Solution {
public:
    int solve(int ind,vector<int>& nums,int target,vector<int> &dp){
        if(ind==nums.size()-1){
            return 0;
        }
        if(dp[ind]!=-1)
            return dp[ind];
        int ans=INT_MIN;
        for(int i=ind+1;i<nums.size();i++){
            if(abs(nums[i]-nums[ind])<=target){
                ans=max(ans,1+solve(i,nums,target,dp));
            }
        }
        return dp[ind]=ans;
    }
    int maximumJumps(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int ans=solve(0,nums,target,dp);
        if(ans>0)
            return ans;
        else
            return -1;
    }
};