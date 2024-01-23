class Solution {
public:
    int solve(vector<string>& arr,int i,string res){
        unordered_set<char>resSet(res.begin(),res.end());
        if(res.size()!=resSet.size())
            return 0;
        if(i>=arr.size()) return res.size();
        int take=solve(arr,i+1,res+arr[i]);
        int notTake=solve(arr,i+1,res);
        return max(take,notTake);
    }
    int maxLength(vector<string>& arr) {
        return solve(arr,0,"");
    }
};