class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int ones=0;
        for(int i=0;i<n;i++){
            ones+=s[i]-'0';
        }
        int zeroes=n-ones;
        string result="";
        for(int i=0;i<ones-1;i++){
            result.push_back('1');
        }
        for(int i=0;i<zeroes;i++){
            result.push_back('0');
        }
        result.push_back('1');
        return result;
    }
};