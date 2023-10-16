class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
         int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int c=0;
                for(int k=i;k<=j;k++){
                    if(s[k]=='1')
                        c++;
                }
                if(c==k){
                    string s1=s.substr(i,j-i+1);
                    if(ans.size()==0 || s1.size()<ans.size())
                        ans=s1;
                    else if(s1.size()==ans.size())
                        ans=min(ans,s1);
                }
            }
        }
        return ans;
    }
};