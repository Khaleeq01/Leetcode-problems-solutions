class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<int>next(2,0);
        vector<int>cur(2,0);
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                 if(buy){
            cur[buy]= max (-prices[ind]+next[0],0+next[1]);
        }
                else{
         cur[buy]= max(prices[ind]-fee+next[1],0+next[0]);
    }
            }
            next=cur;
        }
        return next[1];
    }
};