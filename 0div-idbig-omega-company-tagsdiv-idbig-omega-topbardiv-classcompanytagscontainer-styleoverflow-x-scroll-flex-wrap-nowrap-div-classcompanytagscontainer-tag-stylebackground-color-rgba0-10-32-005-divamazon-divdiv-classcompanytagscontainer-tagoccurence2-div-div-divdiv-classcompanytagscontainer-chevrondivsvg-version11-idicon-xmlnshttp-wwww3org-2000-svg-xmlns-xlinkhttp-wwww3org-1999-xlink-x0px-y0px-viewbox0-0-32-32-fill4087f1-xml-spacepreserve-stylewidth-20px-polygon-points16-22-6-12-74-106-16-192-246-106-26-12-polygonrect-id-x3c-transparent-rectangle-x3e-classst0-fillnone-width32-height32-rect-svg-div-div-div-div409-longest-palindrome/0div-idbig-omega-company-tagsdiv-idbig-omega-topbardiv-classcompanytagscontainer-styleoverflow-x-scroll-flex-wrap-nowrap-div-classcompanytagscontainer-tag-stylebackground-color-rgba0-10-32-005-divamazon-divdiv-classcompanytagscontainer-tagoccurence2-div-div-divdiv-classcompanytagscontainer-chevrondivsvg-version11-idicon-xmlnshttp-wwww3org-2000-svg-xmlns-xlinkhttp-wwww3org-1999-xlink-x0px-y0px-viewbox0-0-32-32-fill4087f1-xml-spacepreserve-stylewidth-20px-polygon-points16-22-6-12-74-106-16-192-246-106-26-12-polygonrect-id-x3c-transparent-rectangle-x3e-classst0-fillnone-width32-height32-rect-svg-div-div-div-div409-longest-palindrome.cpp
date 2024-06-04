class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        unordered_map<char,int>mp;
        // count the freq of string
        for(auto c:s){
            mp[c]++;
        }
        bool isOdd=false;
        for(auto it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }
            else{
                ans+=it.second-1;
                isOdd=true;
            }
        }
        return (isOdd)?ans+1:ans;
    }
};