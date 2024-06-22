class Solution {
public:
    int numberOfSubarrayLessThanEqualToGoal(vector<int>& nums,int goal){
        int i=0,j=0,n=nums.size(),count=0,ans=0;
        while(j<n){
            if(nums[j]%2!=0) count++;
            while(i<=j && count>goal){
                if(nums[i]%2!=0) count--;
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       return numberOfSubarrayLessThanEqualToGoal(nums,k)- numberOfSubarrayLessThanEqualToGoal(nums,k-1);
    }
};