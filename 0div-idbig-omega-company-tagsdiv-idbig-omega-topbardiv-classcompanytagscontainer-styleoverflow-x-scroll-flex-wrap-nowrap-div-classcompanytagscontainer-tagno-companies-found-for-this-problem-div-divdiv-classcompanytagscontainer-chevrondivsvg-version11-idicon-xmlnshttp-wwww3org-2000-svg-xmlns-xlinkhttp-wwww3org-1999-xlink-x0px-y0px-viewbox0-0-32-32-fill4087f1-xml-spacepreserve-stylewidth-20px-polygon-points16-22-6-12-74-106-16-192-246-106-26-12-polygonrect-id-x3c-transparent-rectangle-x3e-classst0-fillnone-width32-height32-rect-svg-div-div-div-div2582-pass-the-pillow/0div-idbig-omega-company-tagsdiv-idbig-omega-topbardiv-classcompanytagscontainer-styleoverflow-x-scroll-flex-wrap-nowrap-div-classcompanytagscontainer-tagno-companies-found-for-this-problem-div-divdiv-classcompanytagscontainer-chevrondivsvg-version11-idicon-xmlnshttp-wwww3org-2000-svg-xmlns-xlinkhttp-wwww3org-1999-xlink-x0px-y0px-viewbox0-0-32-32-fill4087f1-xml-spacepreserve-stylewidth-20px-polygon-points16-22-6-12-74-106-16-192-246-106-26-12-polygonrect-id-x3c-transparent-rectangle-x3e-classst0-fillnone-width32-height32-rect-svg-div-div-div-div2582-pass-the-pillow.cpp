class Solution {
public:
    int passThePillow(int n, int time) {
       if(time<n) return 1+time;
        int rem=time%(n-1);
        int quo=time/(n-1);
        if(quo%2!=0){
            return (n-rem);
        }
        return 1+rem;
    }
};