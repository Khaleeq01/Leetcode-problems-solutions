class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int i=nums.size()/2-1;
        int j=nums.size()-1;
        while(i>=0 && j>=0){
            if(2*nums[i]<=nums[j]){
                ans++;
                j--;
            }
            i--;
        }
        return 2*ans;
    }
};