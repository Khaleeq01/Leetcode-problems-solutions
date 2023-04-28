class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=1,ans=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]-nums[i]==k){
                i++;
                j++;
                ans++;
                while(j<nums.size() && nums[j]==nums[j-1]){
                    j++;
                }
            }
            else if(nums[j]-nums[i]<k){
                j++;
            }
            else{
                i++;
                if(j-i==0){
                    j++;
                }
            }
        }
        return ans;
    }
};