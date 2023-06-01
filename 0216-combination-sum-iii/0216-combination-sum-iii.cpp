class Solution {
public:
    void helper(int i,int k,int sumTillNow,int n,vector<int>& subset, vector<vector<int>>& ans){
        //if sumtillnow is greater than n we dont need to proceed further
        if(sumTillNow>n) return;
        if(k==0){
            if(sumTillNow==n){
                ans.push_back(subset);
            }
            return;
        }
        if(i==10) return;
        sumTillNow+=i;
        subset.push_back(i);
        helper(i+1,k-1,sumTillNow,n,subset,ans);
        //backtrack
        sumTillNow-=i;
        subset.pop_back();
        //call recursion for next step
        helper(i+1,k,sumTillNow,n,subset,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>subset;
        helper(1,k,0,n,subset,ans);
        return ans;
    }
};