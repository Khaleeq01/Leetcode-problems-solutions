class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,1),ct(n,1);
        int maxi=1;
        for(int i=0;i<=n-1;i++){
            for(int prev_ind=0;prev_ind<=i-1;prev_ind++){
                if(arr[i]>arr[prev_ind] && 1+dp[prev_ind]>dp[i]){
                    dp[i]=1+dp[prev_ind];
                    //inherit
                    ct[i]=ct[prev_ind];
                }
                else if(arr[i]>arr[prev_ind] && 1+dp[prev_ind]==dp[i]){
                    //increase the count
                    ct[i]+=ct[prev_ind];
                }
            }
            maxi=max(maxi,dp[i]);
        }
        int nos=0;
        for(int i=0;i<=n-1;i++){
            if(dp[i]==maxi)
                nos+=ct[i];
        }
        return nos;
    }
};