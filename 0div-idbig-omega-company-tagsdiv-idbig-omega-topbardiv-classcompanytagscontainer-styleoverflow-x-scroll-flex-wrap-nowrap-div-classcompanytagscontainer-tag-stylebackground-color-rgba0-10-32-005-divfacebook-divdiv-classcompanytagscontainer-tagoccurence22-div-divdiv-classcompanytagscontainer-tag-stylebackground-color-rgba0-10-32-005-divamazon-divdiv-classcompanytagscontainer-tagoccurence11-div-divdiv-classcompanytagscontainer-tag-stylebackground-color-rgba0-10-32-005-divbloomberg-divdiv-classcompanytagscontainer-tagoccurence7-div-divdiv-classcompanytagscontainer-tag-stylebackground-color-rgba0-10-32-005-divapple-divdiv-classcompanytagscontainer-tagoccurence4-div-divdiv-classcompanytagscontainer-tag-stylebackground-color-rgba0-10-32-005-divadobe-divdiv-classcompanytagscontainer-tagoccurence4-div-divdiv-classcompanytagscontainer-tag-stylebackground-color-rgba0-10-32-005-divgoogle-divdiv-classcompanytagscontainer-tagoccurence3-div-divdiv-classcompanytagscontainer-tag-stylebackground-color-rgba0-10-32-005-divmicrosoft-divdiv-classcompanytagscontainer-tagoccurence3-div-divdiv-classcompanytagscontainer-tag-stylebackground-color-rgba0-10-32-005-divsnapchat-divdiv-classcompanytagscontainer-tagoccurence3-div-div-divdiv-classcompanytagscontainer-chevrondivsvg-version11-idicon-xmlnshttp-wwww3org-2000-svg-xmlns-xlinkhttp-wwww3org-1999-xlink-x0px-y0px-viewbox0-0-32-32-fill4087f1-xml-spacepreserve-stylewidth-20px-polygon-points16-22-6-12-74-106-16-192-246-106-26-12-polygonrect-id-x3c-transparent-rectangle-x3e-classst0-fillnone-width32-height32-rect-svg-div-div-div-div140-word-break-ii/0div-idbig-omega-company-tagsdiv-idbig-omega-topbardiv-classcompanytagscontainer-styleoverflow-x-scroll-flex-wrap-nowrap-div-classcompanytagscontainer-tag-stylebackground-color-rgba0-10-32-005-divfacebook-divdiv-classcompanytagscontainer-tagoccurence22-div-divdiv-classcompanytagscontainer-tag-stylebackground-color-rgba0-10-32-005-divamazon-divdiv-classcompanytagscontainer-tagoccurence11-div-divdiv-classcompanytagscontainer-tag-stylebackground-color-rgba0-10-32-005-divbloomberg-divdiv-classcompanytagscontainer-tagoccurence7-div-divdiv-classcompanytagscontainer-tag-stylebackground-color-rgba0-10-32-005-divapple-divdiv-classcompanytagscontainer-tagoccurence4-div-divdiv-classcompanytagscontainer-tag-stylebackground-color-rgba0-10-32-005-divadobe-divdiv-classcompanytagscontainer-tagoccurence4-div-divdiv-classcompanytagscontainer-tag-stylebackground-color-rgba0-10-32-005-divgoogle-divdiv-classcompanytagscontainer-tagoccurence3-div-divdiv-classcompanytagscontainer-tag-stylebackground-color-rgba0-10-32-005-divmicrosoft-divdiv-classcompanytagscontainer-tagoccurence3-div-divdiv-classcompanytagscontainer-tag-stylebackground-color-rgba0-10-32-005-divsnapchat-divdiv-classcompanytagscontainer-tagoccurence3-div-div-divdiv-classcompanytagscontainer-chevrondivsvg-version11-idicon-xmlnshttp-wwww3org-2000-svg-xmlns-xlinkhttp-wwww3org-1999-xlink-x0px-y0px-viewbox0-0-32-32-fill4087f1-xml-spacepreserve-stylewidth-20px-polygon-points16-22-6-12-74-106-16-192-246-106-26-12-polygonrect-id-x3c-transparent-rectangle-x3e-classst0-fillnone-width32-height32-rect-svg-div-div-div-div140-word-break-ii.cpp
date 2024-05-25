class Solution {
public:
    void solve(string s,vector<string>& wordDict,string output,int index,vector<string>& ans){
        //base case
        if(index==s.size()){
            output.pop_back();
            ans.push_back(output);
            return;
        }
        string temp="";
        for(int i=index;i<s.length();i++){
            temp+=s[i];
            if(find(wordDict.begin(),wordDict.end(),temp)!=wordDict.end()){
                solve(s,wordDict,output+temp+" ",i+1,ans);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>ans;
        string output="";
        solve(s,wordDict,output,0,ans);
        return ans;
    }
};