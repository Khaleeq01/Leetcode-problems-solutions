class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
       vector<int>next(2*k+1,0);
        vector<int>cur(2*k+1,0);
        int profit=0;
        for(int index=n-1;index>=0;index--){
            for(int operationNo=0;operationNo<2*k;operationNo++){
                if(operationNo%2==0){
            //buy is allowed
            int buy=-prices[index]+next[operationNo+1];
            int skip=0+next[operationNo];
            profit=max(buy,skip);
        }
        else{
            int sell=prices[index]+next[operationNo+1];
            int skip=0+next[operationNo];
            profit=max(sell,skip);
           }
         cur[operationNo]= profit;
             }
            next=cur;
            }
      return next[0];
    }
};