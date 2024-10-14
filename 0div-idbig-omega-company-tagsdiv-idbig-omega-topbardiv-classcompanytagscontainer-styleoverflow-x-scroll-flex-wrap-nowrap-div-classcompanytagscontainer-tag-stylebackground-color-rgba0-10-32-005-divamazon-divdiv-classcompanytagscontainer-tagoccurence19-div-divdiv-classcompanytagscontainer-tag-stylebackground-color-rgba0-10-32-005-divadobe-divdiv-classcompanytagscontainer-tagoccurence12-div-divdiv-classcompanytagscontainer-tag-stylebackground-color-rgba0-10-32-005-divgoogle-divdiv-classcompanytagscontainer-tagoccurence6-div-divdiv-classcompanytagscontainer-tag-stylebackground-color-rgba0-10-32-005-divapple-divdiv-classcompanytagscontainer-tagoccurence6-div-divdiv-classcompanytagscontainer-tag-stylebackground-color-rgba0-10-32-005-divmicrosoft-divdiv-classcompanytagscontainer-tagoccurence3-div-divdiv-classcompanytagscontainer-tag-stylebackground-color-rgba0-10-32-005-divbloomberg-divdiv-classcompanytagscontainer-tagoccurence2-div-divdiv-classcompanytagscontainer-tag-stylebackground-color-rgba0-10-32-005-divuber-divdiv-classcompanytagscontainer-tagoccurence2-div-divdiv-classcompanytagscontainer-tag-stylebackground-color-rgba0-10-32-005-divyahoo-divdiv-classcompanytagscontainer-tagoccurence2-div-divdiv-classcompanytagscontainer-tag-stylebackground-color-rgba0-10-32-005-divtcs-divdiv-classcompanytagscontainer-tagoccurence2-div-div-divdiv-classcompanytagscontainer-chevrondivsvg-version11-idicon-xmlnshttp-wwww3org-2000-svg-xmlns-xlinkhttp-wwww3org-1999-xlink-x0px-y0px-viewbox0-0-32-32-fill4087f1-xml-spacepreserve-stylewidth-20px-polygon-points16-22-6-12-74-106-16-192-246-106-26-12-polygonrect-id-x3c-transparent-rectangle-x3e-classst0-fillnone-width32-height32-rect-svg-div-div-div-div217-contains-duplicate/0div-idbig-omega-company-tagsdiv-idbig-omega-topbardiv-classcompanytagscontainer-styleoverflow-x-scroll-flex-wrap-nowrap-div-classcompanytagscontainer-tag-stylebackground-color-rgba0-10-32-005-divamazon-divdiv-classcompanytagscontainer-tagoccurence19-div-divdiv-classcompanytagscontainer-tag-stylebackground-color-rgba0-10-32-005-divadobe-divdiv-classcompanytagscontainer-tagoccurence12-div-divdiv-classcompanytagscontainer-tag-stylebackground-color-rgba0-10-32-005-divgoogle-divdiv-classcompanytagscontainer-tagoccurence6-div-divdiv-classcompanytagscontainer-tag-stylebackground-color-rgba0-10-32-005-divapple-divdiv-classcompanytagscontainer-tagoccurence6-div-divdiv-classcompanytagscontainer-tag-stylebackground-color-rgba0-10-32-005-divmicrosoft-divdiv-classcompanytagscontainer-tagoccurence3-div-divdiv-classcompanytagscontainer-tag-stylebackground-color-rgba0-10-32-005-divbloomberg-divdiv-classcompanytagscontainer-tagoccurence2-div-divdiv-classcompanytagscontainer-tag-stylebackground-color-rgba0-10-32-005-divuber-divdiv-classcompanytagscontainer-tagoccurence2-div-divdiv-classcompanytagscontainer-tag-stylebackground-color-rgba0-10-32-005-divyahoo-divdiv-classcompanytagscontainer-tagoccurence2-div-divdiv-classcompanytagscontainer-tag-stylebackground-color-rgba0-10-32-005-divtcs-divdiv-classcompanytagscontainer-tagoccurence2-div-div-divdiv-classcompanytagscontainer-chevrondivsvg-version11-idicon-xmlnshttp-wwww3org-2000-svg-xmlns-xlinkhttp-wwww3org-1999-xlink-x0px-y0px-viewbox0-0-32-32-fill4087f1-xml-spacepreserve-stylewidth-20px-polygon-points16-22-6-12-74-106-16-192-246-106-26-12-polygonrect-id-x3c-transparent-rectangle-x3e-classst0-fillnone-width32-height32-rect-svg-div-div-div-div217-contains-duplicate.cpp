class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int>set;
        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }
    // if it contains duplicate then the size of 
    // set will not equal to the length of the array
        if(set.size()<nums.size())
            return true;
        return false;
    }
};