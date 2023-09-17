class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int num=i;
            int count=0;
            while(num){
                if(num%2==1) count++;
                num/=2;
            }
            if(count==k)
                ans+=nums[i];
        }
        return ans;
    }
};