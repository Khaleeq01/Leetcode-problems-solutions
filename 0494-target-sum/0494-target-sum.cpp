class Solution {
public:
    int countPartitions(vector<int>& nums,int tar){
        int n=nums.size();
       vector<int> prev(tar+1,0),cur(tar+1,0);
       if(nums[0]==0)
           prev[0]=2;
        else prev[0]=1;
            if(nums[0]!=0 && nums[0]<=tar) prev[nums[0]] = 1;
        for(int ind=1;ind<n;ind++){
            for(int target=0;target<=tar;target++){
                int notTaken=prev[target];
        int taken=0;
        if(nums[ind]<=target)
            taken=prev[target-nums[ind]];
        cur[target]=(notTaken + taken);
            }
            prev=cur;
        }
      return prev[tar];
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