class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
       int ans=-1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long long x=1*nums[i];
            long long pwr=x*x;
            if(binary_search(nums.begin(),nums.end(),pwr)){
                int len=1;
                while(binary_search(nums.begin(),nums.end(),pwr)){
                    len++;
                    pwr=pwr*pwr;
                }
                ans=max(ans,len);
            }
        }
        return ans;
    }
};