class Solution {
public:
    string solve(string curr,int n,unordered_set<string>numsSet){
        //base case
        if(curr.size()==n){
            if(numsSet.find(curr)==numsSet.end())//if binary string is not found in hashmap then return curr
                return curr;
            return "";
        }
        string addZero=solve(curr+"0",n,numsSet);
        if(addZero.size()>0) return addZero;
        return solve(curr+"1",n,numsSet);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<string>numsSet;
        for(string s:nums){
            numsSet.insert(s);
        }
        return solve("",n,numsSet);
    }
};