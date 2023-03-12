class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n=nums.size();
        long long ans=0,sum=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--){
               sum+=nums[i];
            if(sum>0)
                ans++;
            else
                break;
        }
        return ans;
    }
};