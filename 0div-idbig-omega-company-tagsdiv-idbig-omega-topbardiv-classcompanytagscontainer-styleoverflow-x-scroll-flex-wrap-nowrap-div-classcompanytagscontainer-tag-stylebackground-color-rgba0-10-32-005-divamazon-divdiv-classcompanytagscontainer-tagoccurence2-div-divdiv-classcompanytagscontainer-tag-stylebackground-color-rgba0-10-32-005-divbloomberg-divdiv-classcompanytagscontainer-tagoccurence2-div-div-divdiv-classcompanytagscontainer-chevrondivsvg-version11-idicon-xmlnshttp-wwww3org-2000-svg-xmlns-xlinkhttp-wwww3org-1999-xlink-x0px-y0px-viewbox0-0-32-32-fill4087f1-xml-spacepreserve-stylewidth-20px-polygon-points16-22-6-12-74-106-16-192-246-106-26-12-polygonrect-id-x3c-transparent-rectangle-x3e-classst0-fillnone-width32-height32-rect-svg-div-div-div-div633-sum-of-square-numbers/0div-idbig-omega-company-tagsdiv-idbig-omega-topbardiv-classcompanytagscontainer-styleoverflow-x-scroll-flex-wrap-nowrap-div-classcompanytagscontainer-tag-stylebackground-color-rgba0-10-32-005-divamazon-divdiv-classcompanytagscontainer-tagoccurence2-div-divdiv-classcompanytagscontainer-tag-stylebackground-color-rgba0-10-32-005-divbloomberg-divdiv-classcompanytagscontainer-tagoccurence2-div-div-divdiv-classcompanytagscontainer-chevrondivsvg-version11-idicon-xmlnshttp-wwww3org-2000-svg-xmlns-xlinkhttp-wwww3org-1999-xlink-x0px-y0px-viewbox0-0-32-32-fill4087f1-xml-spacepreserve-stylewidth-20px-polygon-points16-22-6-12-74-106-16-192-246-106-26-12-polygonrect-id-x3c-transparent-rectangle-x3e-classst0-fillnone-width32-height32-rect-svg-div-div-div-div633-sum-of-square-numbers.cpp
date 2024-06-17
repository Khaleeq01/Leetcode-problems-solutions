#define ll long long int 
class Solution {
public:
    bool judgeSquareSum(int c) {
        ll b=sqrt(c),a=0;
        while(a<=b){
            ll res=a*a+b*b;
            if(res==c) return true;
            else if(res<c) a++;
            else
                b--;
        }
        return false;
    }
};