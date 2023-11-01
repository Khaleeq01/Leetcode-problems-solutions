class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string>v(10);
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                v[s[i]-'0']=word+" ";// 2-0=2 
                word=""; // intialize word again empty
                i++; //to move ahead of space
            }
            else
                word+=s[i];
        }
        string ans;
        for(string x:v){
            ans+=x;
        }
        ans.pop_back(); // remove end space
        return ans;
    }
};