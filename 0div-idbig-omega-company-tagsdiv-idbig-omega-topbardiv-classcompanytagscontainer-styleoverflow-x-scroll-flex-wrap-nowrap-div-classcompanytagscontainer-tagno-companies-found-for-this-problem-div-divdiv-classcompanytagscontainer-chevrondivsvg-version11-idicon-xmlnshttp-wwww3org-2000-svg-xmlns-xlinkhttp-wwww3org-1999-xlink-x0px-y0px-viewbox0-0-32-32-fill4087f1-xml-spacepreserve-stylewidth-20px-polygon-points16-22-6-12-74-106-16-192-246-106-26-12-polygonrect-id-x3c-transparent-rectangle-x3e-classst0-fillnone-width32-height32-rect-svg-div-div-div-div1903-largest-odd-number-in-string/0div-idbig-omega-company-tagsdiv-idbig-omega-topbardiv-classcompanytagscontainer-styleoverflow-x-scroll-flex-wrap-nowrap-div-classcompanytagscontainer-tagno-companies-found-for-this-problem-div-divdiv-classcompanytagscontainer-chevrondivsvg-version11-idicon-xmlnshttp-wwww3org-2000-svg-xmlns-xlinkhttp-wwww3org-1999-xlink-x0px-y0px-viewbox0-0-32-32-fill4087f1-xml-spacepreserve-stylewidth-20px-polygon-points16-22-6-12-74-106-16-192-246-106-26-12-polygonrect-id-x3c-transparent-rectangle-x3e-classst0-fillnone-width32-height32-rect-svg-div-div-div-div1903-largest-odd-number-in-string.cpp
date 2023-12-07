class Solution {
public:
    string largestOddNumber(string num) {
        int size=num.size();
        while(size--){
            if(num[size]%2!=0)
                return num.substr(0,size+1);
        }
        return "";
    }
};