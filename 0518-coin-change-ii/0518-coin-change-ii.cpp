class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<int>prev(amount+1,0),cur(amount+1,0);
        for(int T=0;T<=amount;T++){
                prev[T]=(T%coins[0]==0);
        }
        for(int ind=1;ind<n;ind++){
            for(int T=0;T<=amount;T++){
                 int notTake=prev[T];
           int take=0;
          if(coins[ind]<=T)
         take=cur[T-coins[ind]];
     cur[T]=(notTake+take);
            }
            prev=cur;
        }
        return prev[amount];
    }
};