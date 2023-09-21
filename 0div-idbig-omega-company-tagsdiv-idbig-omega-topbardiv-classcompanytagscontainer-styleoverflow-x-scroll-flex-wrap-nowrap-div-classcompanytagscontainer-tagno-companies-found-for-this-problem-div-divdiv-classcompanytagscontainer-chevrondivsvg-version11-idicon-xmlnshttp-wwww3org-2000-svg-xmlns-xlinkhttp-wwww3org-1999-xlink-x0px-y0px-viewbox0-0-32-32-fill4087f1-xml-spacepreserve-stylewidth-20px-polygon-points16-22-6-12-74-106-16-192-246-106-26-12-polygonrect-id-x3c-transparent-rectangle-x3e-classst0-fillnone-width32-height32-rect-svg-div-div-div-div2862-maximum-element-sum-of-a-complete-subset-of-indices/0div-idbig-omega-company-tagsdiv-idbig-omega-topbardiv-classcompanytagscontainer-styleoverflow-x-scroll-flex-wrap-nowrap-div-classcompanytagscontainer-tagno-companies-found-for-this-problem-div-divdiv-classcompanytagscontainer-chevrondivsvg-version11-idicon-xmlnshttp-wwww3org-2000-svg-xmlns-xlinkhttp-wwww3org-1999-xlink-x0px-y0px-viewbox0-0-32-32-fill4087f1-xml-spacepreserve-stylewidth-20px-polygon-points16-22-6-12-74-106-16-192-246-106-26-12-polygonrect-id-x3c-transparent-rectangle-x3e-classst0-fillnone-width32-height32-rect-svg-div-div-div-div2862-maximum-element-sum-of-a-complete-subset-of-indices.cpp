class Solution {
public:
    long long maximumSum(vector<int>& nums) {
        unordered_map<int,long long>count; // for storing nums and remaing part left after perfect sqaure
        long long res=0,x,v; // v for perfect square and x is for nums
        for(int i=0;i<nums.size();i++){
            for(x=i+1,v=2;v*v<=x;v++)
                while(x%(v*v)==0)
                    x/=v*v;
            res=max(res,count[x]+=nums[i]);
        }
        return res;
    }
};