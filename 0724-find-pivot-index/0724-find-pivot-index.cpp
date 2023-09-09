class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            sum-=nums[i];
            if(sum==leftSum)
                return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};