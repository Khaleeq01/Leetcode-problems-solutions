class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>next(n+1,0);
        vector<int>cur(n+1,0);
        for(int ind=n-1;ind>=0;ind--){
            for(int prev_ind=ind-1;prev_ind>=-1;prev_ind--){
                    int notTake=0+next[prev_ind+1];
        int take=0;
        if(prev_ind==-1 || nums[ind]>nums[prev_ind]){
            take=1+next[ind+1];
        }
         cur[prev_ind+1]=max(notTake,take);
            }
            next=cur;
        }
        return next[0];
    }
};