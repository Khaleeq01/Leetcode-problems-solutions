class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       long long int n=nums.size();
        long long int S=(n*(n+1))/2;
        long long int P=(n*(n+1)*(2*n+1))/6;
        long long int repeating=0,missing=0;
        for(int i=0;i<n;i++){
            S-=(long long int)nums[i];
            P-=(long long int)nums[i]*(long long int)nums[i];
        }
     missing=(S+P/S)/2;
        repeating=missing-S;
        vector<int>ans;
        ans.push_back(repeating);
        ans.push_back(missing);
        return ans;
    }
};