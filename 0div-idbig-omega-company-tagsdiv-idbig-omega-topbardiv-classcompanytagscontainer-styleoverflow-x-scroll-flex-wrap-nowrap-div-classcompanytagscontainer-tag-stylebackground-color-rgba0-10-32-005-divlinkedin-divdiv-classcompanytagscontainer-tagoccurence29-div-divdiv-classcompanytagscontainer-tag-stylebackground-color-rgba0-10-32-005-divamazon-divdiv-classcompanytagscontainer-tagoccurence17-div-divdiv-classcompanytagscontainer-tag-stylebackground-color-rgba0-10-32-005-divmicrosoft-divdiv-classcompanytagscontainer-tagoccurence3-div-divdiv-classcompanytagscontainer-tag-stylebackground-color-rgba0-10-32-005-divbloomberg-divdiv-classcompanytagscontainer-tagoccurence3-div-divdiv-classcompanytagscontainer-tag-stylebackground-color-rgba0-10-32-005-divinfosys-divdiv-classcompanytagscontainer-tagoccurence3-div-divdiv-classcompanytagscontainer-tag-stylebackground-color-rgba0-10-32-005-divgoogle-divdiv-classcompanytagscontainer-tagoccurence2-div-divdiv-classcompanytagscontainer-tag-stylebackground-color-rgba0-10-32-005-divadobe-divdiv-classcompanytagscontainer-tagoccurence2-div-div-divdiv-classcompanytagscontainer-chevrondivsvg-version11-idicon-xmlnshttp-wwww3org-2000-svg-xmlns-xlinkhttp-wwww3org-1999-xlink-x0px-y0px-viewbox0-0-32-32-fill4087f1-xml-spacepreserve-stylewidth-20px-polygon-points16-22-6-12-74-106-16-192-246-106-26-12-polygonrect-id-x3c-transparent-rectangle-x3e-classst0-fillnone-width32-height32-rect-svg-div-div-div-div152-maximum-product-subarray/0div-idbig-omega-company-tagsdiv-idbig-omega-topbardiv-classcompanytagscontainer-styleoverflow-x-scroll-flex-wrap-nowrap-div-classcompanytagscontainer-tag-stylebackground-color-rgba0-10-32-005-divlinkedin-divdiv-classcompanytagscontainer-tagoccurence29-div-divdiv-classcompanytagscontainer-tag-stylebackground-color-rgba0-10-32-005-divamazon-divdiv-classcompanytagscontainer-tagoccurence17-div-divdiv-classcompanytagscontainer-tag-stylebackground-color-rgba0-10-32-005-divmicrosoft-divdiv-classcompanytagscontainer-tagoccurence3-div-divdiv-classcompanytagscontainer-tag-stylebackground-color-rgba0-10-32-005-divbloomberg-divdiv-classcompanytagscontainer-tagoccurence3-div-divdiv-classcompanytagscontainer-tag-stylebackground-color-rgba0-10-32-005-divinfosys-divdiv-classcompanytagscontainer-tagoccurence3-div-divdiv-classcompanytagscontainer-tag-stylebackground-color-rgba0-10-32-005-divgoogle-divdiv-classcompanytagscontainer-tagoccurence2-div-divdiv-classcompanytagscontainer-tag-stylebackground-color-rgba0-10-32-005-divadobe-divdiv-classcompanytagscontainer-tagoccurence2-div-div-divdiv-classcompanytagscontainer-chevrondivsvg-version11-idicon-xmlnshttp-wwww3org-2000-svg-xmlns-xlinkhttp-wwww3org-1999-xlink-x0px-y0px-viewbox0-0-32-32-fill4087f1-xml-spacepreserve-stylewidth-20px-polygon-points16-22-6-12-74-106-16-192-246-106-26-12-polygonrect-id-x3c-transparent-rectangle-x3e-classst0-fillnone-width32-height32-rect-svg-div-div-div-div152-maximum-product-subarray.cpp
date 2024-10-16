class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //forward iteration
        int n=nums.size();
        int prod=1;
        int max_prod=INT_MIN;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            max_prod=max(max_prod,prod);
            if(prod==0){
                prod=1;
            }
        }
        //backward iteration test case [3,-1,4]
        prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            max_prod=max(max_prod,prod);
            if(prod==0){
                prod=1;
            }
        }
        return max_prod;
    }
};