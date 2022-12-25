class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
      int ans=INT_MAX,n=words.size();
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int t=min(abs(startIndex-i),n-abs(startIndex-i));
                ans=min(ans,t);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};