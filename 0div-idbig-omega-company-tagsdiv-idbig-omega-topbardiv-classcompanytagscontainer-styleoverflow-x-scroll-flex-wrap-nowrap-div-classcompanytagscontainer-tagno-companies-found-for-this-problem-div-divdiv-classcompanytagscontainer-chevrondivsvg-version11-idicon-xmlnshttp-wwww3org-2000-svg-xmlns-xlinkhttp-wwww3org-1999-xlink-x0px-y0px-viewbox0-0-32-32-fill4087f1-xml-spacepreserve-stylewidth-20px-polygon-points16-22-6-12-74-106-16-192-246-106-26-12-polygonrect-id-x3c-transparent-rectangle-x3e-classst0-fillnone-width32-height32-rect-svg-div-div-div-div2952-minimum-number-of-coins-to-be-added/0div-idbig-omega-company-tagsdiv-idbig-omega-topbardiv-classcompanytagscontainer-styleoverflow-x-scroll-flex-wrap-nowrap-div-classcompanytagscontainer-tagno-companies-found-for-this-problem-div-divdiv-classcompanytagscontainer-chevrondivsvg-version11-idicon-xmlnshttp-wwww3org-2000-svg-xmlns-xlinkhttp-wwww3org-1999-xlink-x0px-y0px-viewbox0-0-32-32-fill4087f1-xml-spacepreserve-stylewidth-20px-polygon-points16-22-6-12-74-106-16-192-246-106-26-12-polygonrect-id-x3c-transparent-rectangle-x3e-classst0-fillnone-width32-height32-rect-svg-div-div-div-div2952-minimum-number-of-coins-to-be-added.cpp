class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        //sort the array
        sort(coins.begin(),coins.end());
        int curr_max=0;
        int additions=0;
        int index=0;
    //check coin can contribute to target
        while(curr_max<target){
            if(index<coins.size() && coins[index]<=curr_max+1){
                curr_max+=coins[index];
                index++;
            }
            else{
                curr_max+=curr_max+1;
                additions++;
            }
        }
        return additions;
    }
};