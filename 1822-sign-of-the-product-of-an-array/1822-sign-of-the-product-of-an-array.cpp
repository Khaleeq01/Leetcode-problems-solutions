class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int count_negative=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                return 0;
            else if(nums[i]<0)
                count_negative++;
        }
            if(count_negative%2==0)
                return 1;
        return -1;
    }
};