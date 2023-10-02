class Solution {
public:
    bool winnerOfGame(string s) {
        int a=0,b=0; //Intialize alice and bob score
        for(int i=1;i<s.size()-1;i++){
            if(s[i-1]==s[i] && s[i]==s[i+1]){ //check for AAA and BBB
                if(s[i]=='A')
                    a++; //increase alice score
                else
                    b++; //increase bob score
            }
        }
        return a>b; // determine winner it is returning true 
    }
};