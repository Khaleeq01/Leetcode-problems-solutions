class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
      unordered_map<int,int>freq;
        for(auto num:nums){
            freq[num]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(freq[a]==freq[b]){
                return a>b;
            }
            return freq[a]<freq[b];
        });
        return nums;
    }
};