class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp; // store number and its count
        int total=0; // for calculating pair
        for(int i=0;i<n;i++){
            total+=mp[nums[i]]; // check how many dulicates are present before
            mp[nums[i]]++; //increase the count frequency
        }
        return total;
    }
};