class Solution {
public:
    unordered_map<int,int>m;
    int singleNumber(vector<int>& nums) {
        for(auto i:nums){
            m[i]++;
        }
        for(auto it:m){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};