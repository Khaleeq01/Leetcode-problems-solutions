class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0,j=0,c=0;
        int n=s.size();
        string ans;
        while(j<n){
            if(s[j]=='1')
                c++;
            if(c==k){
                while(i<n && c==k){
                    string s1=s.substr(i,j-i+1);
                    if(ans.size()==0 || s1.size()<ans.size())
                        ans=s1;
                    else if(ans.size()==s1.size())
                        ans=min(ans,s1);
                    if(s[i]=='1')
                        c--;
                        i++;
                }
            }
            j++;
        }
        return ans;
    }
};