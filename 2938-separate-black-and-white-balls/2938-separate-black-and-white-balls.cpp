class Solution {
public:
    long long minimumSteps(string s) {
        long long res=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
                count++;
            else
                res+=count;
        }
        return res;
    }
};