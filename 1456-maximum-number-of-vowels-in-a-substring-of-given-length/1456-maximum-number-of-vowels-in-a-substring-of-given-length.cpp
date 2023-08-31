class Solution {
public:
    int isVowels(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return 1;
        }
        return 0;
    }
    int maxVowels(string s, int k) {
        int max_vowels=0,curr_vowels=0;
        for(int i=0;i<s.size();i++){
            curr_vowels+=isVowels(s[i]);
        if(i>=k)
            curr_vowels-=isVowels(s[i-k]);
            max_vowels=max(curr_vowels,max_vowels);
        }
        return max_vowels;
    }
};