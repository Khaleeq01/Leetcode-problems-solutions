class Solution {
public:
    bool isVowel(char c){
        return c=='A'|| c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    
    string sortVowels(string s) {
        //take unordered map to store count of vowel
        unordered_map<char,int>count;
        for(auto c:s){
            count[c]++;
        }
        string sortedVowel="AEIOUaeiou";
        string ans;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(!isVowel(s[i]))
                ans+=s[i];
            else{
                while(count[sortedVowel[j]]==0)
                    j++;
                ans+=sortedVowel[j];
                count[sortedVowel[j]]--;
            }
        }
        return ans;
    }
};