class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            //if sum is zero ans is found
            if(sum==0)
                return nums[r];
            if(sum>0){
                r--;
            }
            else
                l++;
        }
        return -1;
    }
};