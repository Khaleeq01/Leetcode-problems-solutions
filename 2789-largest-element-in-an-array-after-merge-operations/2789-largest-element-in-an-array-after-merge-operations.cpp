class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n=nums.size();
        long long sum=nums[n-1],ans=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=sum)
                sum+=nums[i];
            else
            sum=nums[i];
            ans=max(sum,ans);
        }
        return ans;
    }
};