class Solution {
public:
    void solve(vector<int>& nums,int index,vector<vector<int>>& ans,vector<int> output){
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,index+1,ans,output);
        //include

        output.push_back(nums[index]);
        solve(nums,index+1,ans,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        solve(nums,index,ans,output);
        return ans;
    }
};