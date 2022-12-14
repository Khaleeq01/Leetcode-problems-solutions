class Solution {
public:
    int countPartitions(int ind,int target,vector<int>& nums){
        if(ind==0){
            if(target==0 && nums[0]==0)
                return 2;
              if(target==0 || target == nums[0])
            return 1;
        return 0;
        }
        int notTaken=countPartitions(ind-1,target,nums);
        int taken=0;
        if(nums[ind]<=target)
            taken=countPartitions(ind-1,target-nums[ind],nums);
        return (notTaken + taken);
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
        int s2=(totalSum-target)/2;
        return countPartitions(n-1,s2,nums);
    }
};