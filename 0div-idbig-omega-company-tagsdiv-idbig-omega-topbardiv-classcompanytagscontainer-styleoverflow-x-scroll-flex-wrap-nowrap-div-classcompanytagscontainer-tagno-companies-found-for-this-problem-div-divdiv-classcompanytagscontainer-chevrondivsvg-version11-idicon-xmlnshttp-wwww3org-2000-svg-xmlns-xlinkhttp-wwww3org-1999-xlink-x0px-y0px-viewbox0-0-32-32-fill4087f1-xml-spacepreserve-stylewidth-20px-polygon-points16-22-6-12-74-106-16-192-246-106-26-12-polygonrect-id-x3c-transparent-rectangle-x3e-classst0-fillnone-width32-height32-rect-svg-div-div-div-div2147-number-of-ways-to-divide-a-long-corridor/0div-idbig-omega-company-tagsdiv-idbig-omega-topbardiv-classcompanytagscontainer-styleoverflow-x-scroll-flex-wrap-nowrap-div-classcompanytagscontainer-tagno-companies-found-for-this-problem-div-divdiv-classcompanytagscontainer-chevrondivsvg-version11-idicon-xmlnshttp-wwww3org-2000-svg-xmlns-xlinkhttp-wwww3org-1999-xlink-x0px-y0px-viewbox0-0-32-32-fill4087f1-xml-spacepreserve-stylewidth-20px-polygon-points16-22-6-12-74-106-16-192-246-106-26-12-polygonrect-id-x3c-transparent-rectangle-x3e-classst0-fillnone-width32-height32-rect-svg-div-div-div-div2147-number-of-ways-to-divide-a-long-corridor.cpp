#define ll long long int
#define Mod 1000000007;
class Solution {
public:
    int numberOfWays(string corridor) {
        ll ans=1;
        int n=corridor.size(),countSeats=0,lastIndex=-1;
        for(int i=0;i<n;i++){
            if(corridor[i]=='P') continue;
            
            countSeats++;
            if(countSeats>=3 && countSeats%2==1){
                int bars=i-lastIndex;
                ans=(ans*bars) % Mod;
            }
            lastIndex=i;
        }
        return (countSeats==0 || countSeats%2==1)?0:ans;
    }
};