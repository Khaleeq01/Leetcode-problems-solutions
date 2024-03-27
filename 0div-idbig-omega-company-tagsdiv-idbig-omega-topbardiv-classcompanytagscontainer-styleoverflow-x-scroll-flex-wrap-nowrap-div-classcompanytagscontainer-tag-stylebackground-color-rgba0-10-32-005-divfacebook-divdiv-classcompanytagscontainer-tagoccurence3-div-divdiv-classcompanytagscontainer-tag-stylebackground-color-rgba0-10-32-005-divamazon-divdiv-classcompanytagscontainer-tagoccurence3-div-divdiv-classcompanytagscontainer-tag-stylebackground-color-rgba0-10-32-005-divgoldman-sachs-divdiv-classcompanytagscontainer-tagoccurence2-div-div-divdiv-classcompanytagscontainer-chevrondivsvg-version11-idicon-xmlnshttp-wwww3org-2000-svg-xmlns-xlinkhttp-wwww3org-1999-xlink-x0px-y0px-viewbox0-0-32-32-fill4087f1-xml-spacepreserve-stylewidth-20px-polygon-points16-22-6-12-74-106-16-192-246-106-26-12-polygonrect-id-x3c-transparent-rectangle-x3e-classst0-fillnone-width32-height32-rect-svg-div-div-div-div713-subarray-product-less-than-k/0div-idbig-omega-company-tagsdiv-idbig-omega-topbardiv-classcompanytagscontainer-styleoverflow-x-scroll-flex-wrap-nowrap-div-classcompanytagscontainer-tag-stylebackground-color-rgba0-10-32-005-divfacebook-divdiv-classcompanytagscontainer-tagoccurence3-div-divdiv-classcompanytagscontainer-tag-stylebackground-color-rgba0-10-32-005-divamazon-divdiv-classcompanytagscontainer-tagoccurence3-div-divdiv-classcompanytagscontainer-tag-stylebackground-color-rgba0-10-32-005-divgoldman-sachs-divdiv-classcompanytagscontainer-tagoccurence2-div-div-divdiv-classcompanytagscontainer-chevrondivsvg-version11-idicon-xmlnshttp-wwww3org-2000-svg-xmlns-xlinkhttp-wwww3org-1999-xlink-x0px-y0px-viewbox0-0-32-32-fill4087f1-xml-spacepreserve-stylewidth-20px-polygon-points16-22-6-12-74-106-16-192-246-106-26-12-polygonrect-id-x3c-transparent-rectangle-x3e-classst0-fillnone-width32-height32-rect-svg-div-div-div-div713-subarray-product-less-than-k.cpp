class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0,ans=0,prod=1;
        int n=nums.size();
        if(k<=1) return 0;
        for(int right=0;right<n;right++){
            prod*=nums[right];
            while(prod>=k){
                prod/=nums[left];
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};