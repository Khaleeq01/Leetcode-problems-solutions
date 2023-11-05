class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int curr=arr[0]; //curr is used to store the winner
        int win=0;
        for(int i=1;i<n;i++){
            if(arr[i]>curr){
                curr=arr[i];
                win=0;
            }
            win++;
            if(win== k) break;
        }
        return curr;
    }
};