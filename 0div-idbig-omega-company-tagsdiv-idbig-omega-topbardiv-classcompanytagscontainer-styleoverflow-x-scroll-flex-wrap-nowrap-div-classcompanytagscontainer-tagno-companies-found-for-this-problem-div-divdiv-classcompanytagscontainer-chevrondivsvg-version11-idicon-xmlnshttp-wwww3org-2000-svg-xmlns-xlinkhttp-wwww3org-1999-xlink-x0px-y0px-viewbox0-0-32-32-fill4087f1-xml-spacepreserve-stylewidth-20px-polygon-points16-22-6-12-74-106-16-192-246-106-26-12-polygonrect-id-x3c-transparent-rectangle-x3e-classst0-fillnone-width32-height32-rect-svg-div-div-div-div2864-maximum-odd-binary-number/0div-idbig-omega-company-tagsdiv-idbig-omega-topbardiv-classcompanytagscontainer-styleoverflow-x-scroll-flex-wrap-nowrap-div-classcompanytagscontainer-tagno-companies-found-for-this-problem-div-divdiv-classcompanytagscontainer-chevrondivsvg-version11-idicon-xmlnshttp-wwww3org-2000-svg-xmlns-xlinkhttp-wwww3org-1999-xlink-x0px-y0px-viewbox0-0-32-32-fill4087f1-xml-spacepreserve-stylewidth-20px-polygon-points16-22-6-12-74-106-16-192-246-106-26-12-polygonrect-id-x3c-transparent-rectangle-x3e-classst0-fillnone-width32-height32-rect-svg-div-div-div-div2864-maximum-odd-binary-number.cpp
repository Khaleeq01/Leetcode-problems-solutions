class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int ones=0;
        for(int i=0;i<n;i++){
            ones+=s[i]-'0';//calculate 1 in bits
        }
        int zeroes=n-ones;//calculate 0 in bits 
        string result="";
        for(int i=0;i<ones-1;i++){
            result.push_back('1');//we have to make max number so put 1 in right side
        }
        for(int i=0;i<zeroes;i++){
            result.push_back('0');//after placing 1 store 0's in result 
        }
        result.push_back('1');// add 1 in left side as we have to make number odd
        return result;
    }
};