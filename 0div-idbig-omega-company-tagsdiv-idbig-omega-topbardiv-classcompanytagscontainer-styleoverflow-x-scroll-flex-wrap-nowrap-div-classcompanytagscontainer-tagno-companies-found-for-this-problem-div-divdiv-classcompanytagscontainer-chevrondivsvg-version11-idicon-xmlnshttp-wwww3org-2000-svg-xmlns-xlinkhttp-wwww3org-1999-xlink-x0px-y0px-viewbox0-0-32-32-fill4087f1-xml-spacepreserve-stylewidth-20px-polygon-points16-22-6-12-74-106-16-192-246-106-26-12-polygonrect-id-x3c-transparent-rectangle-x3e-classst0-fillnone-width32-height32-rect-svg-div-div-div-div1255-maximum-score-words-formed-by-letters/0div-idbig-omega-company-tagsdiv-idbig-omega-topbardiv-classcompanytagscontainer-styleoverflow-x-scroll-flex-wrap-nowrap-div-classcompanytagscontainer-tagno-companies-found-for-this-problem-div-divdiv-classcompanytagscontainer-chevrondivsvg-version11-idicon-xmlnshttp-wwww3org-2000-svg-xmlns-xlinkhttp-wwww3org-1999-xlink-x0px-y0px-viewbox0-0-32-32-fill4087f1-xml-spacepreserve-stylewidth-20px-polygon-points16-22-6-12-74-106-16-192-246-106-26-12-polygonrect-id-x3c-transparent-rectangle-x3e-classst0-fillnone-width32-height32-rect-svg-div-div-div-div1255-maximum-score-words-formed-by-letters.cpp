class Solution {
public:
    int a[26];// An array to store the count of each letter in the given list of letters.
    int b[26];// An array to store the count of each letter in the current subset of words being considered.
    int ans=0;
    void solve(int index,vector<string>& words,vector<int>& score){
        //base case
        if(index==words.size()){
            int sc=0;
            for(int i=0;i<26;i++){
                if(b[i]>a[i]) return;
                sc+=score[i]*b[i];
            }
            ans=max(ans,sc);
            return;
        }
        //take case
        solve(index+1,words,score);
        for(auto i:words[index]) b[i-'a']++;
        //not Take case
        solve(index+1,words,score);
        for(auto i:words[index]) b[i-'a']--;//backtrack
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        for(auto i:letters) a[i-'a']++;
        solve(0,words,score);
        return ans;
    }
};