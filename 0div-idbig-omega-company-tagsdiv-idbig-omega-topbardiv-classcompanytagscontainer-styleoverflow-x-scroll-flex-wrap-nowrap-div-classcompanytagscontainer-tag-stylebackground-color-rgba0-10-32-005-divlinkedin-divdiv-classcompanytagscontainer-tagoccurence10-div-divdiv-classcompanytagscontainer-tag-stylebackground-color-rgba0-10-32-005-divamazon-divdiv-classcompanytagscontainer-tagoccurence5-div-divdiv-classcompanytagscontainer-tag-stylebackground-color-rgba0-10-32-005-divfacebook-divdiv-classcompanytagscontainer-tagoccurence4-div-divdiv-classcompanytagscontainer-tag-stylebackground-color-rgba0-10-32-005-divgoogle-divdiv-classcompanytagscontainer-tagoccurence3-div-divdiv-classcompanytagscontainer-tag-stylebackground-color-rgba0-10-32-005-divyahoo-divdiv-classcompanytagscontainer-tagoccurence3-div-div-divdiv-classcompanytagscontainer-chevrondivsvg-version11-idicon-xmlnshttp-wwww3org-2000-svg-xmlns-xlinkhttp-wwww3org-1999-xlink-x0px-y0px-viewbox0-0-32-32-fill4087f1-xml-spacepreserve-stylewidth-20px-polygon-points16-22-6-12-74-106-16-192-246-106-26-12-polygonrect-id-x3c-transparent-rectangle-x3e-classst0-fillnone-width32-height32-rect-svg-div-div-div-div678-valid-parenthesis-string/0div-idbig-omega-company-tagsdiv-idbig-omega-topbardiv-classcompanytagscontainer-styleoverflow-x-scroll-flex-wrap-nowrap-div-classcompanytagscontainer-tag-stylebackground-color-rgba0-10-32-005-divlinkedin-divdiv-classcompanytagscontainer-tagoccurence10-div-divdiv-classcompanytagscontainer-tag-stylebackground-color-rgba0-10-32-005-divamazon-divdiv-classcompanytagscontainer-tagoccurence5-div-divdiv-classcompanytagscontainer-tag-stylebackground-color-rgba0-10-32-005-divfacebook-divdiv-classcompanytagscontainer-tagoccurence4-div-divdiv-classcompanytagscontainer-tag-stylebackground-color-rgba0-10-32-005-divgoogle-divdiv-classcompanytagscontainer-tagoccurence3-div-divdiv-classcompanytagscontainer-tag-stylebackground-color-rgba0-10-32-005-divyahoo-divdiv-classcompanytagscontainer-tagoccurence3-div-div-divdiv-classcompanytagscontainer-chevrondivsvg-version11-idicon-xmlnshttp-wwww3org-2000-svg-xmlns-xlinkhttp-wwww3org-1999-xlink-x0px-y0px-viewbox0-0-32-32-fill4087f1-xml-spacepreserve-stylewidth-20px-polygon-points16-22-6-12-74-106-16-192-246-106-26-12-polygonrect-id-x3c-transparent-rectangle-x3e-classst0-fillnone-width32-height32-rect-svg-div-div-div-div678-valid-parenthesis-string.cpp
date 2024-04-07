class Solution {
public:
    bool checkValidString(string s) {
        int openCount=0,closeCount=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            
            if(s[i]=='(' || s[i]=='*') openCount++;
            else openCount--;
            
            if(s[n-1-i]==')' || s[n-1-i]=='*') closeCount++;
            else closeCount--;
            
            if(openCount<0 || closeCount<0) return false;
        }
        return true;
    }
};