class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
       unordered_map<char,int>firstIndex;//to store char and its frequency
        for(int i=0;i<s.size();i++){
            //if char is already present then update maximum substring
            if(firstIndex.find(s[i])!=firstIndex.end()){
                ans=max(ans,i-firstIndex[s[i]]-1);
            }
            // if it occurs first time push it into map
            else{
                firstIndex[s[i]]=i;
            }
        }
        return ans;
    }
};