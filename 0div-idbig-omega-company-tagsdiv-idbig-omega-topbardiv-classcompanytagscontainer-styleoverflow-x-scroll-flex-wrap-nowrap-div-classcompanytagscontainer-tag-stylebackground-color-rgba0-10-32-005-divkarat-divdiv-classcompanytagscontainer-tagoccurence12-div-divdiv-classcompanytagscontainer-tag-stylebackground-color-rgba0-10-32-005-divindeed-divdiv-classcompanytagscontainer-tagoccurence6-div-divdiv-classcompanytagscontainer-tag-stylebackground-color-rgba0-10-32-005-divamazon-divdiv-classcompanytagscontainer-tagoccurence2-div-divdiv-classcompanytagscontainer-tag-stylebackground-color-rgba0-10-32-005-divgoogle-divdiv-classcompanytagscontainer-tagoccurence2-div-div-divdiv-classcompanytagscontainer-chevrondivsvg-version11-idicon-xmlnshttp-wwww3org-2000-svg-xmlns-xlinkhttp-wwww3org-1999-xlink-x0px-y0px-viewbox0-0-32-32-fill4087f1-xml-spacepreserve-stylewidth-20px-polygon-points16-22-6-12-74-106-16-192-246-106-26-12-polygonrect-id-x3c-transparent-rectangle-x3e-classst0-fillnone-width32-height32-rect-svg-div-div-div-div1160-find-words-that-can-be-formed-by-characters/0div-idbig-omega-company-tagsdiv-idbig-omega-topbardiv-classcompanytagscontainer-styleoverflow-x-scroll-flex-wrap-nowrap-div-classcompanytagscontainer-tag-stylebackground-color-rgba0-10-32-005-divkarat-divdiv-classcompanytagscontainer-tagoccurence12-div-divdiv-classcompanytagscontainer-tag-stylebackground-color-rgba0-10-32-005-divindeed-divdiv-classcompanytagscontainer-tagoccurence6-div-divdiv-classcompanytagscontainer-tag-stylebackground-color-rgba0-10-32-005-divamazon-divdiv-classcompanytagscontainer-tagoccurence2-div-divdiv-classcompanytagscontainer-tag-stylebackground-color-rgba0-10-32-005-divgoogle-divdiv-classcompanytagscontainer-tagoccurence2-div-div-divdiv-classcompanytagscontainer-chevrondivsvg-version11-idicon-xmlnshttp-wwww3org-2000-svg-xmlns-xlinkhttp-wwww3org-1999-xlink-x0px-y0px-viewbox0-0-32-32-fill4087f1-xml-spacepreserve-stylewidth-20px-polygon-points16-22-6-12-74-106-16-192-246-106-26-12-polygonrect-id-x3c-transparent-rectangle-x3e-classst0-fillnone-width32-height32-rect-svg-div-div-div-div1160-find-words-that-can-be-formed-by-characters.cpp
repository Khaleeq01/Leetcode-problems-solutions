class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        //store frequency of chars
        vector<int>v(26,0);
        for(char c:chars){
            v[c-'a']++;
        }
        //store frequency of words
        int ans=0;
        for(string word:words){
        vector<int>count(26,0);
            for(char c:word){
                count[c-'a']++;
            }
            bool isGood=true;
            //if frequency of count exceeds char then mark isgood false
            for(int i=0;i<26;i++){
                if(v[i]<count[i]){
                    isGood=false;
                break;
                }
            }
            if(isGood){
                ans+=word.size();
            }
        }
        return ans;
    }
};