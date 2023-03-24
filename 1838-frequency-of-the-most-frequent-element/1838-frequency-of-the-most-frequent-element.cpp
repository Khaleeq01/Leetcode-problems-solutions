class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long l=0,r=0,n=nums.size(),ans=0;
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(;r<n;r++){
            sum+=nums[r];
            for(;nums[r]*(r-l+1)-sum>k;l++){
                sum-=nums[l];
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};