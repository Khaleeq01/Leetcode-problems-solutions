#define ll long long int
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<unordered_map<ll,int>>dp(n); // to store dp[index][difference]
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                ll diff=(ll) nums[i]-nums[j];
                dp[i][diff]+=1+dp[j][diff];
                ans+=dp[j][diff];
            }
        }
        return ans;
    }
};