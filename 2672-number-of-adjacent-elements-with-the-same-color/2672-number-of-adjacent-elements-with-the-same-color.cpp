class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int>ans,nums(n,0);
        int count=0;
        for(auto q:queries){
            int index=q[0],color=q[1];
            if(nums[index] && index-1>=0 && nums[index-1]==nums[index])
                count--;
            if(nums[index] && index+1<n && nums[index+1]==nums[index])
                count--;
            nums[index]=color;
            if(index-1>=0 && nums[index-1]==nums[index])
                count++;
            if(index+1<n && nums[index+1]==nums[index])
                count++;
            ans.push_back(count);
        }
        return ans;
    }
};