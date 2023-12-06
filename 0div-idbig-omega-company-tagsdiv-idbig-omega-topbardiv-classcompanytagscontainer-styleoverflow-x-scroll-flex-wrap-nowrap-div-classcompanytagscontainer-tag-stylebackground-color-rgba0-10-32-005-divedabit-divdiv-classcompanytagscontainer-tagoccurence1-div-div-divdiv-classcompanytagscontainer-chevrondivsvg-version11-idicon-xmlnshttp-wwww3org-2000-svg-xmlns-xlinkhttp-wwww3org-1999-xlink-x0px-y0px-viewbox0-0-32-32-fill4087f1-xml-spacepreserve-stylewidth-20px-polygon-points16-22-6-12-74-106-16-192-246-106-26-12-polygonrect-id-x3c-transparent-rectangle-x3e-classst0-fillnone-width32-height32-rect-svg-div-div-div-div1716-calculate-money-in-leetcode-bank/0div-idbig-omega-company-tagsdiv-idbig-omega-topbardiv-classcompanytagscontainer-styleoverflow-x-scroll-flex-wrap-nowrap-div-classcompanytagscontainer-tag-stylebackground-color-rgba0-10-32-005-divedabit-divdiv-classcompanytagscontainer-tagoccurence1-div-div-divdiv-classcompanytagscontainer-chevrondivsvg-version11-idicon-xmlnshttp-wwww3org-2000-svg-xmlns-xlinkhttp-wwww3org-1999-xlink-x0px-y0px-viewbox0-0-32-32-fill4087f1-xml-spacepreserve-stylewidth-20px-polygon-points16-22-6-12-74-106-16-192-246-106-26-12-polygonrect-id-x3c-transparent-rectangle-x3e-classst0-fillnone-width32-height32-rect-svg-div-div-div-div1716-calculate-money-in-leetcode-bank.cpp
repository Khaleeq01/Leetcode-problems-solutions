class Solution {
public:
    int totalMoney(int n) {
        int k=n/7; //for calculating weeks
        int sum=(k*(2*28+(k-1)*7))/2; //calculate total amount of money in leetcode bank
        //calculating days
        for(int days=0;days<n%7;days++){
            sum+=(k+1)+days;
        }
        return sum;
    }
};