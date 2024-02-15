#define ll long long
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        ll prefixSum=nums[0]+nums[1];
        ll ans=0;
        for(int i=2;i<nums.size();i++){
            if(prefixSum>nums[i]){
            ans = max(ans, prefixSum + nums[i]);
            }
            prefixSum+=nums[i];
        }
        return (ans==0)?-1:ans;
    }
};