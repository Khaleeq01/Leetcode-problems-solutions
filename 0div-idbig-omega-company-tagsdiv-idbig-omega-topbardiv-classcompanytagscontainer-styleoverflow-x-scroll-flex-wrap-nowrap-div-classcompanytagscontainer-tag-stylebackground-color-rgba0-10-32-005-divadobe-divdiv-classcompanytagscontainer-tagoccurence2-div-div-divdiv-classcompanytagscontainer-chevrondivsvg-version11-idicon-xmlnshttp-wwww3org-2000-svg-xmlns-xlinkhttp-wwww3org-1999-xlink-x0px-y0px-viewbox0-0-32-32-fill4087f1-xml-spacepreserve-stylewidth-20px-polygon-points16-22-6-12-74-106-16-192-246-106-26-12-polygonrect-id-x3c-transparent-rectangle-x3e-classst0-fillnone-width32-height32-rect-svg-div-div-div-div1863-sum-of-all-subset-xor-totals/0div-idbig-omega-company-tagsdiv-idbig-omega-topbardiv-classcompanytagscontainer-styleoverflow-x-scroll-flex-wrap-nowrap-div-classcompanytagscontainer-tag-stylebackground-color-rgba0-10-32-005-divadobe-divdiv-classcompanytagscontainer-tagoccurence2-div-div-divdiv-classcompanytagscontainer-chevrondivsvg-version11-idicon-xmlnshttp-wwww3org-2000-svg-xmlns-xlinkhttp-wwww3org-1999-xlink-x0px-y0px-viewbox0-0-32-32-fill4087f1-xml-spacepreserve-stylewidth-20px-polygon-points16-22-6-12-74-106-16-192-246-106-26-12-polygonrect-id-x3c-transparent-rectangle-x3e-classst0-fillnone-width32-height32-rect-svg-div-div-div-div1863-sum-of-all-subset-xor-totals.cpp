class Solution {
public:
    int solve(vector<int>& nums,int currInd,int currNum){
        //bsae case
        if(currInd==nums.size()){
            return currNum;
        }
        int include=solve(nums,currInd+1,currNum^nums[currInd]);
        int exclude=solve(nums,currInd+1,currNum);
        return include+exclude;
    }
    int subsetXORSum(vector<int>& nums) {
       return solve(nums,0,0);
    }
};