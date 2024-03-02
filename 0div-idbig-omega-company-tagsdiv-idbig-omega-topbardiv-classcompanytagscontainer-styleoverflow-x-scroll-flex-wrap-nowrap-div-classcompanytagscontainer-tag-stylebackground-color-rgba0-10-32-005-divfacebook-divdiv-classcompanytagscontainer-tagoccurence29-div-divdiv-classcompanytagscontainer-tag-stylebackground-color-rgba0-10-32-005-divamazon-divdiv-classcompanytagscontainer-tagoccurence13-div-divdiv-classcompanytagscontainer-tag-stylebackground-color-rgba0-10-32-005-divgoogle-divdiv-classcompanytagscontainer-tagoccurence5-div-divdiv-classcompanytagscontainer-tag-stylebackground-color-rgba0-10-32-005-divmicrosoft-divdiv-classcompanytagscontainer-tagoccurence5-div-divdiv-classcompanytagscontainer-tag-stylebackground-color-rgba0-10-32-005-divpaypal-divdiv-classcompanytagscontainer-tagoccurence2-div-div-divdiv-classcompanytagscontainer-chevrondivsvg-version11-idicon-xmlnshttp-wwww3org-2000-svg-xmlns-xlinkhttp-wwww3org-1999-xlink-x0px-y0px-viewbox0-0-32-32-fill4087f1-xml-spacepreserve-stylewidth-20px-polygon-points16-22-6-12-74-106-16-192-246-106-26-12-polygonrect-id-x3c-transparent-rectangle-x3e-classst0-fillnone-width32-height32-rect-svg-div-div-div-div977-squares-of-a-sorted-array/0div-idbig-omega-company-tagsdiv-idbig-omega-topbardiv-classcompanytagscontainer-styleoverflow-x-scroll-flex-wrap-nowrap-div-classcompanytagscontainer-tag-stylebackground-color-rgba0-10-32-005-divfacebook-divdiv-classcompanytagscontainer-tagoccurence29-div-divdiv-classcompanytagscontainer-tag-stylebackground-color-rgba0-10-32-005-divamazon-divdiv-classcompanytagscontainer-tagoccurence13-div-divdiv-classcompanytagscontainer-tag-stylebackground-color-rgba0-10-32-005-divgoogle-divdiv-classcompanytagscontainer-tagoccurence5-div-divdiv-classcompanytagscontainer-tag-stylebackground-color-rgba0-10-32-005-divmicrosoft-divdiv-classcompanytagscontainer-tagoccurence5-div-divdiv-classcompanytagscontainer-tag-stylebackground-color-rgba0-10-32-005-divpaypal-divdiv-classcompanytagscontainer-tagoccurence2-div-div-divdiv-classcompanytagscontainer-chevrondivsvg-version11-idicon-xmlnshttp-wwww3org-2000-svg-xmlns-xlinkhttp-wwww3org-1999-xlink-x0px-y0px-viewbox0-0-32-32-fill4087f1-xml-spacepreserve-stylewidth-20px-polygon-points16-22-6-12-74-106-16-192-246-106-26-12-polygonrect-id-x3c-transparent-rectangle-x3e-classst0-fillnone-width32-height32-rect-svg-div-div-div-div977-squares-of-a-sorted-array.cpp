class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int left=0,right=n-1;
        for(int i=n-1;i>=0;i--){
            int val;
            if(abs(nums[left])<abs(nums[right])){
                val=nums[right];
                right--;
            }
            else{
                val=nums[left];
                left++;
            }
            ans[i]=val*val;
        }
        return ans;
    }
};