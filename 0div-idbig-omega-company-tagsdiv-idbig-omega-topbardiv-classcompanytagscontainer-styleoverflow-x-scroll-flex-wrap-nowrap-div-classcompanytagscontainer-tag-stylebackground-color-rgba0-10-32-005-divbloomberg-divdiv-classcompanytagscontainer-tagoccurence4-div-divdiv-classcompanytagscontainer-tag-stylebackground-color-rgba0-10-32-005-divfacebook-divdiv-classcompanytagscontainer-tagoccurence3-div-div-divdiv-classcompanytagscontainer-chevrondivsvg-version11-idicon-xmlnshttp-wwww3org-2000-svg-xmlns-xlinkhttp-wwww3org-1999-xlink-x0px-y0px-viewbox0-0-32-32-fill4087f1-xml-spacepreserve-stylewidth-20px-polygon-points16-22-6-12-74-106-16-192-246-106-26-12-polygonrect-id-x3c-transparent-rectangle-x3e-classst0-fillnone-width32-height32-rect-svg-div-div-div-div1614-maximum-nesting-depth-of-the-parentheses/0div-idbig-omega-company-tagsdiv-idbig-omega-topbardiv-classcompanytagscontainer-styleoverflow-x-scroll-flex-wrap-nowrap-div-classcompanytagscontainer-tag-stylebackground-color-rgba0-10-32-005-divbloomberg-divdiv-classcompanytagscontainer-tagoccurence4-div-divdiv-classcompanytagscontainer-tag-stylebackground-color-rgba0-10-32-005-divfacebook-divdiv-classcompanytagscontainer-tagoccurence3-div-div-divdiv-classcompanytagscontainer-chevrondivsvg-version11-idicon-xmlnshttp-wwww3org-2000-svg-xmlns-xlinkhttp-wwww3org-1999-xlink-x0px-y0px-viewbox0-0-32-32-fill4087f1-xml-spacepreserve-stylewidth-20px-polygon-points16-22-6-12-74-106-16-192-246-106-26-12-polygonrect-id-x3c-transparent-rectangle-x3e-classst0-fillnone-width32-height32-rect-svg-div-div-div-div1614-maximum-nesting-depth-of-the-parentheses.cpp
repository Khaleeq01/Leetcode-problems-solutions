class Solution {
public:
    int maxDepth(string s) {
        int ans=0,n=s.size(),ctopening=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                ctopening++;
            }
            else if(s[i]==')'){
                ctopening--;
            }
         ans=max(ans,ctopening);
        }
        return ans;
    }
};