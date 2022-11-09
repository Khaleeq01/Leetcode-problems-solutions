class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0;
     unordered_set<int>st;
        int i=0,j=0,n=nums.size();
        while(i<n-k+1){
            if(j-i==k){
                ans=max(sum,ans);
                sum-=nums[i];
                st.erase(nums[i++]);
            }
            else if(!st.count(nums[j])){
                sum+=nums[j];
                st.insert(nums[j++]);
            }
            else{
                sum-=nums[i];
                st.erase(nums[i++]);
            }
        }
            return ans;
        }
};