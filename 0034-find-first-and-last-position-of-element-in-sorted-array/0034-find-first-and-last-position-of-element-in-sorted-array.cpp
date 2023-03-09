class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>ans{-1,-1};
          int n=nums.size();
        int s=0,e=n-1;
        //we have to do two binary search
        //first occurence
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        //last occurence
        s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                s=mid+1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};