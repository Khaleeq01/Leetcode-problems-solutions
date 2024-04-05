class Solution {
public:
    string makeGood(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            ans+=s[i];
            // s[i+1]-ans.back()==32 is the difference between ASCII Values of a and A , b and B, c and C
            while(ans.size()>0 && abs(s[i+1]-ans.back())==32){
                ans.pop_back();
                i++;
            }
        }
        return ans;
    }
};