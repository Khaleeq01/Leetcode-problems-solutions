class Solution {
public:
    int mod=1e9+7;
    int numberOfGoodPartitions(vector<int>& nums) {
        unordered_map<int,int>mp;// store the last appear indexes in map
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        int i=0,j=0,ans=1;
        while(i<n){
            if(i>j){
                ans=(ans*2)%mod;
            }
            j=max(j,mp[nums[i]]);
            i++;
        }
        return ans;
    }
};