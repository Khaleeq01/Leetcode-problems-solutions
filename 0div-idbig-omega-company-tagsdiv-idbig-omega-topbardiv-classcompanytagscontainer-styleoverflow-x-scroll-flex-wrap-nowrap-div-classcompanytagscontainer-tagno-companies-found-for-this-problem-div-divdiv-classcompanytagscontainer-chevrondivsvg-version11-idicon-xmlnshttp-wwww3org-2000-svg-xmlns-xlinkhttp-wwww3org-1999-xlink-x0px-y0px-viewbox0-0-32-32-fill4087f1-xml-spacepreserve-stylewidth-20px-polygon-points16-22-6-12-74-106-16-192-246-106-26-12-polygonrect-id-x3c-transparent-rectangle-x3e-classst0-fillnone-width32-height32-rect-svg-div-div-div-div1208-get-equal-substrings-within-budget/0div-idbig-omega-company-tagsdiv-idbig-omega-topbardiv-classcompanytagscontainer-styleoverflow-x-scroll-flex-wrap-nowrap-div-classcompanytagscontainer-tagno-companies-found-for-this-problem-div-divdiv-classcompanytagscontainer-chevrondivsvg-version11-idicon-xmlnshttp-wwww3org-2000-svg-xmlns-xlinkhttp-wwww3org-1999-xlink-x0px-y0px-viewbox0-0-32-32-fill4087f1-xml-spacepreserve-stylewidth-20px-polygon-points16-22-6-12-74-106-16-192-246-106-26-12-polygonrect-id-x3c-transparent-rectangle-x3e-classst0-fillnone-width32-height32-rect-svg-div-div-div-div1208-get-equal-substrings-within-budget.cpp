class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
      int n=s.length(),i=0,j=0,ans=0,curCost=0;
        while(j<n){
            curCost+=abs(t[j]-s[j]);
            while(i<n && curCost>maxCost){
                curCost-=abs(t[i]-s[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};