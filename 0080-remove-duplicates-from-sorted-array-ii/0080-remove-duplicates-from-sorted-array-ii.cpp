class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(auto e:nums){
            if(i==0 || i==1 || e!=nums[i-2]){
                nums[i]=e;
                    i+=1;
            }
        }
        return i;
    }
};