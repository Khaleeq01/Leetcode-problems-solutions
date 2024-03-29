class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            //check for last digit
            if(n&1){
                count++;
            }
            //right shift n
           n=n>>1;
        }
        return count;
    }
};