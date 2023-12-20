class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        for(int i=0;i<prices.size();i++){
            if(money>=prices[0]+prices[1])
                return money-prices[0]-prices[1];
        }
        return money;
    }
};