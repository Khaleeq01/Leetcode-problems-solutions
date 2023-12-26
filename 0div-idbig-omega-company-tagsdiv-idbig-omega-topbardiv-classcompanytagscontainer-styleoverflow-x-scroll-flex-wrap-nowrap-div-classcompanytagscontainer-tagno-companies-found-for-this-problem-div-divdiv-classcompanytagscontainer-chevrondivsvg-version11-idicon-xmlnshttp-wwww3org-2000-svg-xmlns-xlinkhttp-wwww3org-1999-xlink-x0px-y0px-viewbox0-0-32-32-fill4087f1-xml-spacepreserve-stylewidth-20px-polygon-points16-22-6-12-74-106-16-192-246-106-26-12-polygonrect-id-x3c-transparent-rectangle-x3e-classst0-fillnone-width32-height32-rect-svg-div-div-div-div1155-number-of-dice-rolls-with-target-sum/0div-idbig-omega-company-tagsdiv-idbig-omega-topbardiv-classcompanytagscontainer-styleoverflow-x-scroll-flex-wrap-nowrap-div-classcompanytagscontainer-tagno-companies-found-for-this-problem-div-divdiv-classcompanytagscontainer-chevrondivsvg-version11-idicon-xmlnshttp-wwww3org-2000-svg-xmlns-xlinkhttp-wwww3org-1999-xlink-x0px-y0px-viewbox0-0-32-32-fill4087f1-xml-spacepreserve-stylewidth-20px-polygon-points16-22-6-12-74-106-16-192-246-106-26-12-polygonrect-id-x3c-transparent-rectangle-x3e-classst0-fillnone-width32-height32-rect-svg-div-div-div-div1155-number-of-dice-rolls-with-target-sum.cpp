class Solution {
public:
    int mod=1e9+7;
    int numRollsToTarget(int n, int k, int t) {
       vector<int>prev(t+1,0);
        vector<int>curr(t+1,0);
        //base case
        prev[0]=1;
        for(int dice=1;dice<=n;dice++){
            for(int target=1;target<=t;target++){
                long long ans=0;
        for(int i=1;i<=k;i++){
            if(target-i>=0)
            ans+=prev[target-i];
        }
        curr[target]=ans%mod;
            }
            prev=curr;
        }
        return prev[t];
    }
};