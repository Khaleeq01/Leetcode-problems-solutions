class Solution {
public:
    int isPalindrome(string s,int i,int j){
        while(i<=j){
           if(s[i]!=s[j])
               return 0;
            else
            i++;
            j--;
        }
        return 1;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                count+=isPalindrome(s,i,j);
            }
        }
        return count;
    }
};