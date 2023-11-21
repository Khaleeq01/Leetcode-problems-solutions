class Solution {
public:
    int rev(int num){
        int val=0;
        while(num!=0){
            int lastDigits=num%10;
            val=val*10+lastDigits;
            num=num/10;
        }
        return val;
    }
    int mod=1e9+7;
    int countNicePairs(vector<int>& nums) {
         unordered_map<int,int>freq;//to store freq of nums[i]-rev(nums[i])
        int ans=0;
        for(auto el:nums){
            int val=el-rev(el);
            ans=(ans+freq[val])%mod;
            freq[val]++;
        }
        return ans%mod;
    }
};