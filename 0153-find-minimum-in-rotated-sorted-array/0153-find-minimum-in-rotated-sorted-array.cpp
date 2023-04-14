class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums[0]<nums.back())
            return nums[0];
        int s=0,e=nums.size()-1;
        int ans=INT_MAX;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]>=nums[0]){
                s=m+1;
            }
            else{
                ans=min(ans,nums[m]);
                e=m-1;
            }
        }
        return ans;
    }
};