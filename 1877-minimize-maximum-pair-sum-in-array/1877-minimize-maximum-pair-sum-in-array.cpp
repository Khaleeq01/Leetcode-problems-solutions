class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        int minMaxPairSum=INT_MIN;
        while(l<r){
            int currPairSum=nums[l]+nums[r];
            l++;
            r--;
            minMaxPairSum=max(minMaxPairSum,currPairSum);
        }
        return minMaxPairSum;
    }
};