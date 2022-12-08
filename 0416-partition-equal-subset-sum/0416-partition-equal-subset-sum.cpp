class Solution {
public:
    bool subsetSum(int ind,int target,vector<int>& nums,vector<vector<int>> &dp){
        if(target==0)
            return true;
        if(ind==0)
           return nums[0]==target;
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        bool notTaken=subsetSum(ind-1,target,nums,dp);
        bool taken=false;
        if(nums[ind]<=target){
            taken=subsetSum(ind-1,target-nums[ind],nums,dp);
        }
        return  dp[ind][target]=notTaken||taken;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        if(totalSum%2!=0)
            return false;
        else{
            int k=totalSum/2;
            vector<vector<int>> dp(n,vector<int>(k+1,-1));
            return subsetSum(n-1,k,nums,dp);
        }
    }
};