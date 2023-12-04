class Solution {
public:
    string largestGoodInteger(string num) {
        //take ans=-1 initially no num is repeating
        char ans=-1;
        
        for(int i=2;i<num.size();i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                ans=max(ans,num[i]);
            }
        }
        //if no num is repeating means ans==-1 then return "" else multiply length of num*3 
        return (ans==-1)?"":string(3,ans);
    }
};