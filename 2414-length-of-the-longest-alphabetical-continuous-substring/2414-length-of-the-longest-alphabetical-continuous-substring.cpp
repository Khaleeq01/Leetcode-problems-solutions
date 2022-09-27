class Solution {
public:
    int longestContinuousSubstring(string str) {
       int count=0;
       int n=str.size();
       for(int i=0;i<n;i++){
           int curr=1;
           while(i<n && str[i+1]-str[i]==1){
               i++;
               curr++;
           }
           count=max(count,curr);
       }
        return count;
    }
};