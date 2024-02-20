class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //case 1 
        if(nums[0]!=0) return 0;
        //case 2
        if(nums[n-1]!=n) return n;
        for(int i=1;i<=n;i++){
            //case 3
            if(nums[i]!=i) 
                return i;
        }
        return 0;
    }
};