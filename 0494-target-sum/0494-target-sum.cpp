class Solution {
public:
    int countPartitions(vector<int>& nums,int tar){
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(tar+1,0));
       if(nums[0]==0)
           dp[0][0]=2;
        else dp[0][0]=1;
            if(nums[0]!=0 && nums[0]<=tar) dp[0][nums[0]] = 1;
        for(int ind=1;ind<n;ind++){
            for(int target=0;target<=tar;target++){
                int notTaken=dp[ind-1][target];
        int taken=0;
        if(nums[ind]<=target)
            taken=dp[ind-1][target-nums[ind]];
        dp[ind][target]=(notTaken + taken);
            }
        }
      return dp[n-1][tar];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        // checking for edge cases
        if(totalSum-target<0)
            return 0;
        if((totalSum-target)%2!=0) return 0;
        return countPartitions(nums,(totalSum-target)/2);
    }
};