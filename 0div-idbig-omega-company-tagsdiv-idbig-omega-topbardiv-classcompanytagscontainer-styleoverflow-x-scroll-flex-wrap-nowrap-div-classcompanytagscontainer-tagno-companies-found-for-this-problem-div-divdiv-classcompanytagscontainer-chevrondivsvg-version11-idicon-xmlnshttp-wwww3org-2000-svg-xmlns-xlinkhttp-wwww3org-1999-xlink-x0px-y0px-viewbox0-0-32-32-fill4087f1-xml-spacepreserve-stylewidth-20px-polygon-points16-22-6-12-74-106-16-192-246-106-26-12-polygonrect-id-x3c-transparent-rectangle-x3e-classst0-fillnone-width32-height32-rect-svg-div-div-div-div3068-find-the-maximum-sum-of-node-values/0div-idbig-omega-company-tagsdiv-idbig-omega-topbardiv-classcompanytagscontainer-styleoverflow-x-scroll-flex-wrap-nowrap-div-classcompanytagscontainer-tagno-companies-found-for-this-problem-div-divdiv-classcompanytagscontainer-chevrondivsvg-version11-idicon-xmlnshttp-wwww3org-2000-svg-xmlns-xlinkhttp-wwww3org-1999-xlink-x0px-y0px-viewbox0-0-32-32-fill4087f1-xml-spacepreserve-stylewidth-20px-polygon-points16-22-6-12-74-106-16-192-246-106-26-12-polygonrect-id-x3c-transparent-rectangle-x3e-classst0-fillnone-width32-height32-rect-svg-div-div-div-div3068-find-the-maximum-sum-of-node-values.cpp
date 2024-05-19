class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum=0,count=0,sacrifice=INT_MAX;
        for(long long n:nums){
            sum+=max(n^k,n);
            count+=(n^k)>n;
            sacrifice=min(sacrifice,abs(n-(n^k)));
        }
        if(count%2==0) 
            return sum;
        return sum-sacrifice;
    }
};