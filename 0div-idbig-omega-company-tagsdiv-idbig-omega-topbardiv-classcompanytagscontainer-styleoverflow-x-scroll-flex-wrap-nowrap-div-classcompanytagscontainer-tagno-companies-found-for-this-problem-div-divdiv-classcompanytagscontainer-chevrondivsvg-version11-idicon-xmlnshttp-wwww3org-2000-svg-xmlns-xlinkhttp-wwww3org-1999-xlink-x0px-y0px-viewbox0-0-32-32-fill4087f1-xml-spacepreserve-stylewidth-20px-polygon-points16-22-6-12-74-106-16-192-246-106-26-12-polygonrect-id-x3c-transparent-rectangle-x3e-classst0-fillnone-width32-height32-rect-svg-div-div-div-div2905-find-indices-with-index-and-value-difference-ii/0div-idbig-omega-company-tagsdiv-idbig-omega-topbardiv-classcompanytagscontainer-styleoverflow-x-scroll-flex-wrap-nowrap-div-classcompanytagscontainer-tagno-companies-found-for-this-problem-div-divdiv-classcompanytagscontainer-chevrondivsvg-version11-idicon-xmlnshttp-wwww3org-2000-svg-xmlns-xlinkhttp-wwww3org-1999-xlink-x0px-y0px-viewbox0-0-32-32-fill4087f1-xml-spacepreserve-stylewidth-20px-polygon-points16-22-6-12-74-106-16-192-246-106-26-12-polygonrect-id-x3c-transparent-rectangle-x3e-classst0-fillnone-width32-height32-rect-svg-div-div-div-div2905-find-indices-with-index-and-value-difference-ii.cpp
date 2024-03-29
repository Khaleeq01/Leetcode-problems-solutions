class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int d, int v) {
        int mini=0,maxi=0,n=nums.size();
        for(int i=d;i<n;i++){
            if(nums[i-d]<nums[mini]) mini=i-d;
            if(nums[i-d]>nums[maxi]) maxi=i-d;
            if(nums[i]-nums[mini]>=v) return {mini,i};
            if(nums[maxi]-nums[i]>=v) return {maxi,i};
        }
        return {-1,-1,};
    }
};