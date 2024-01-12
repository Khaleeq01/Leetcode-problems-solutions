class Solution {
public:
    bool isVowel(char ch){
       return ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    bool halvesAreAlike(string s) {
        int n=s.size(),count1=0,count2=0;
        for(int i=0;i<n/2;i++){
            if(isVowel(s[i]))
                count1++;
        }
        for(int j=n/2;j<=n;j++){
            if(isVowel(s[j]))
                count2++;
        }
        return count1==count2;
    }
};