class Solution {
public:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        if(s.size()<t.size()){
            return false;
        }
        int count1[26]={0};
        int count2[26]={0};
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            count1[index]++;
        }
        for(int i=0;i<t.size();i++){
            int index=t[i]-'a';
            count2[index]++;
            if(checkEqual(count1,count2))
                return true;
        }
        return false;
    }
};