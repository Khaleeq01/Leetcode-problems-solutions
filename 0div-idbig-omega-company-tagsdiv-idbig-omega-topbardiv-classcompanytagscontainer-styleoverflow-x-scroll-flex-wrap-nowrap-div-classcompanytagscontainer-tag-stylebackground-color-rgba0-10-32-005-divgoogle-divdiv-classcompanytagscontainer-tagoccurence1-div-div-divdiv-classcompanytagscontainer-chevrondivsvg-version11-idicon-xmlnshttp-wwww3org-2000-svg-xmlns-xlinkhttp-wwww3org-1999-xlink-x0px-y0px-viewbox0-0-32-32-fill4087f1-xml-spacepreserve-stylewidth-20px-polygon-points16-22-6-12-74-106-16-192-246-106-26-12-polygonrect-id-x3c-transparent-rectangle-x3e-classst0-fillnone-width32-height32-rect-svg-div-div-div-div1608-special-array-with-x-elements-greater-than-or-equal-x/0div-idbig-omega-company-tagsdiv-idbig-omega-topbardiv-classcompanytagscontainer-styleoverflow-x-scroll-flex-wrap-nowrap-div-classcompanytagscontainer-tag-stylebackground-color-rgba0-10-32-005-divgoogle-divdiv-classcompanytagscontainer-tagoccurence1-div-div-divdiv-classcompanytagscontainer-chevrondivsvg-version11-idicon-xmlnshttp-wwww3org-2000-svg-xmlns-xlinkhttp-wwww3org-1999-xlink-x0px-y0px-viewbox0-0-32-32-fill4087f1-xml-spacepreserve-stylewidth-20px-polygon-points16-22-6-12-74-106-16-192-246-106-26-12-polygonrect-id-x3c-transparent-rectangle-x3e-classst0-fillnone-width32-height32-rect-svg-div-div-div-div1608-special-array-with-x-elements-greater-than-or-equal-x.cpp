class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ct=0,n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]>=ct){
                ct++;
                if(ct>nums[i]) return -1;
            }
            else{
                return ct;
            }
        }
        return n;
    }
};