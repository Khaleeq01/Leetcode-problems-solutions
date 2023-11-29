// Two pointer approach
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        int i=0,j=i+1;
        while(i<n-1){
            if(s[i]==s[j]){
                s.erase(i,2);
                i=0;
                j=i+1;
            }
            else{
                i++;
                j++;
            }
        }
        return s;
    }
};