class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        int ans=0,carry=0;
        //as mentioned in problem stop on 1 
        for(int i=n-1;i>=1;i--){
            //even case
            if((s[i]-'0'+carry)%2==1){
                ans+=2; // add 2  because 2 operations are done right shift and carry
                carry=1;
            }
            // odd case
            else{
                ans+=1;
            }
        }
        return ans+carry;
    }
};