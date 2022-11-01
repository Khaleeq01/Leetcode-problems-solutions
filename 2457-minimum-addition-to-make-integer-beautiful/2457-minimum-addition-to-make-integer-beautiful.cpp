class Solution {
public:
    int sum(long long n){
        int res=0;
        while(n!=0){
            res+=n%10;
            n=n/10;
        }
        return res;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long num=n,base=1;
        while(sum(n)>target){
            n=n/10+1;
            base*=10;
        }
        return n*base-num;
    }
};