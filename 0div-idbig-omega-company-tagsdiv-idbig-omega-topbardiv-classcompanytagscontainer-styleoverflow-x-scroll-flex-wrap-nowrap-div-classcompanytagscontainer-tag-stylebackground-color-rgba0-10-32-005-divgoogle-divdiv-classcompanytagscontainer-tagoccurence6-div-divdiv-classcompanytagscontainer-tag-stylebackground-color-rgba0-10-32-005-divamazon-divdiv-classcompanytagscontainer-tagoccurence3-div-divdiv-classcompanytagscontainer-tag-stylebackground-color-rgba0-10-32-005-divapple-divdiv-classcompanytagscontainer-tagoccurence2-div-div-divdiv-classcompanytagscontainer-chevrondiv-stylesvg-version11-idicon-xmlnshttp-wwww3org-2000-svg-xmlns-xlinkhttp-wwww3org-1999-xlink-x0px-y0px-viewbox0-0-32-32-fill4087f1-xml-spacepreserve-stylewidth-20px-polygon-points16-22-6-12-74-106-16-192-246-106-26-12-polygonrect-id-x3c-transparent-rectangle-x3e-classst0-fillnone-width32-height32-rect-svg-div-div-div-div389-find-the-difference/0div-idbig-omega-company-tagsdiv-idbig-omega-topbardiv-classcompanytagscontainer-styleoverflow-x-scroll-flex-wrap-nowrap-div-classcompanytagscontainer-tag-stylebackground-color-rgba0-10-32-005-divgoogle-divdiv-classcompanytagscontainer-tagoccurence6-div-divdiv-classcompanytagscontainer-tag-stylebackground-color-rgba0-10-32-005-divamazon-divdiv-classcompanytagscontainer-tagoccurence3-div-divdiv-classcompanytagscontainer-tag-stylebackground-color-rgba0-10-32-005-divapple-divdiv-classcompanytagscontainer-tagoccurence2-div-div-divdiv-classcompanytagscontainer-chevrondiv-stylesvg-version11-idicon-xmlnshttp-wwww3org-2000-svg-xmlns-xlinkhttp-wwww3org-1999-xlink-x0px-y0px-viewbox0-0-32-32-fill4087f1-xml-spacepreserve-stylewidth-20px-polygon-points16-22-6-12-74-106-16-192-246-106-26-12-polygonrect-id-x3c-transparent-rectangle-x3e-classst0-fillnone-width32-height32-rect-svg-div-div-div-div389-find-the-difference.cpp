class Solution {
public:
    char findTheDifference(string s, string t) {
        // xor approach 
        // char c=0;
        // for(char i:s) c=c^i;
        // for(char j:t) c=c^j;
        //     return c;
        for(int i=0;i<s.size();i++)
            t[i+1]+=t[i]-s[i];
          return t[t.size()-1];  
    }
};