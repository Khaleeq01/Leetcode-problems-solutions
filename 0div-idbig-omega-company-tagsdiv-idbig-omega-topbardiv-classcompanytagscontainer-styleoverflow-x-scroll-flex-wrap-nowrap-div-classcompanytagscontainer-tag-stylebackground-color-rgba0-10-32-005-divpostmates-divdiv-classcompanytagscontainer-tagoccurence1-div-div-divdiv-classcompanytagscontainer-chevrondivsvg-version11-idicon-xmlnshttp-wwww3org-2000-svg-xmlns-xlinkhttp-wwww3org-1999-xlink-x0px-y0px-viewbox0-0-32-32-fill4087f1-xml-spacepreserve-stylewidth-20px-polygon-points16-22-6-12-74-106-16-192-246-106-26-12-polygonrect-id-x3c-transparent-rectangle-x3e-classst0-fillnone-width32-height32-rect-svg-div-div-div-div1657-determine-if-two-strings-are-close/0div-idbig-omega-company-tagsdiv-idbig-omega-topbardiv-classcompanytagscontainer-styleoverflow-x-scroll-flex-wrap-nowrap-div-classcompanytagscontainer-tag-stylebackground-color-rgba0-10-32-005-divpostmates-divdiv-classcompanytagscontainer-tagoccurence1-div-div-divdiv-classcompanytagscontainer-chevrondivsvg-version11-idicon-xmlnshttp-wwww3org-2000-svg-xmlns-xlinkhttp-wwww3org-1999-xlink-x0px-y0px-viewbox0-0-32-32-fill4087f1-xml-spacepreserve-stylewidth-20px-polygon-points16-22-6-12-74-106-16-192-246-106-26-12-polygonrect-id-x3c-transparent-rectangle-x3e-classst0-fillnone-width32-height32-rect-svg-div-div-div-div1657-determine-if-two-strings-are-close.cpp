class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>w1(26,0),w2(26,0),w3(26,0),w4(26,0);//w1 and w2 for frequencies w3 and w4 for words
        for(char c:word1){
            w1[c-'a']++;//increase frequency of word1
            w3[c-'a']=1;//store count of character
        }
        for(char c:word2){
            w2[c-'a']++;//increase frequency of word2
            w4[c-'a']=1;//store count of character
        }
        sort(w1.begin(),w1.end());//sort the frequencies
        sort(w2.begin(),w2.end());//sort the frequencies
        return w1==w2 && w3==w4;
    }
};