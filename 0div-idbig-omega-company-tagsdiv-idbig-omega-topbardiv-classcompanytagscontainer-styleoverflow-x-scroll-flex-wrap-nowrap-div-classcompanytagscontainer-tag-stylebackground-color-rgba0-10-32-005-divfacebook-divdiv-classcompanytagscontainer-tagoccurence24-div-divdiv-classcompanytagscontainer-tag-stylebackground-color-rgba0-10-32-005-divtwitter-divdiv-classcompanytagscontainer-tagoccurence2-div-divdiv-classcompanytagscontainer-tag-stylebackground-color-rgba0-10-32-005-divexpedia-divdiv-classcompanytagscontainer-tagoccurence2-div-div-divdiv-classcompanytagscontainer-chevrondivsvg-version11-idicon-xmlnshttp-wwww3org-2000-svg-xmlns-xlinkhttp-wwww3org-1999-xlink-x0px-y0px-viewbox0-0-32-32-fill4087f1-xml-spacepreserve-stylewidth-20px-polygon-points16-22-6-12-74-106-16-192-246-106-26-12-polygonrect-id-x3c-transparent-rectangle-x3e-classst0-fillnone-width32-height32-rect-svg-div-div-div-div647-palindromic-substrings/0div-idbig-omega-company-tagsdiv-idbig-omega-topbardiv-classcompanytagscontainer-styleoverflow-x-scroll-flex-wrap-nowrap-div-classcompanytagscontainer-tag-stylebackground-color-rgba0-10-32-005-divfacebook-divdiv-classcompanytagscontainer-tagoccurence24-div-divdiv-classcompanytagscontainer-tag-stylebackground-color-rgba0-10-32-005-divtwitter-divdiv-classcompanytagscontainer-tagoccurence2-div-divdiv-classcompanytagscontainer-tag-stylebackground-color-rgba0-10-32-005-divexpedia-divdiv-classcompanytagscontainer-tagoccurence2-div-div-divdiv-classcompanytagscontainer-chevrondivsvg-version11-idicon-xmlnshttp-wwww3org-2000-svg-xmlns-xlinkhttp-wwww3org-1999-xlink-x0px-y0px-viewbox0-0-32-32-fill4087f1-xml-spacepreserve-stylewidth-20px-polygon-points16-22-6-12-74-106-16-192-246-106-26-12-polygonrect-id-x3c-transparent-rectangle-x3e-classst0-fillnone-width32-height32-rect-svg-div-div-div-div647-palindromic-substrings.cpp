class Solution {
public:
    int palindromicCount(string& s, int i,int j){
        int count=0;
        while(i>=0 && j<s.size() && s[i]==s[j]){
            i--;
            j++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            int even=palindromicCount(s,i,i+1);
            int odd=palindromicCount(s,i,i);
            count+=even+odd;
        }
        return count;
    }
};