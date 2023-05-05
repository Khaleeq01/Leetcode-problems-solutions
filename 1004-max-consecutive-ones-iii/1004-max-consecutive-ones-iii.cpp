class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,end=0,zeroCount=0,max_length=0;
        for(;end<nums.size();end++){
            if(nums[end]==0)
                zeroCount++;
            while(zeroCount>k){
                if(nums[start]==0)
                    zeroCount--;
                start++;
            }
            max_length=max(max_length,end-start+1);
        }
        return max_length;
    }
};