class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,ans=0,count_0=0;
        int n=nums.size();
        for(;r<n;r++){
            if(nums[r]==0)
                count_0++;
        for(;count_0>1;l++){
            if(nums[l]==0)
            count_0--;
        }
        ans=max(ans,r-l+1);
    }
        return ans-1;
    }
};