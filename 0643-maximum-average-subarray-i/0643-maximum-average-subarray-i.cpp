class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double max_sum=0;
        int i=0;
        //calculate the sum of first k window
        for(;i<k;i++){
            sum+=nums[i];
        }
        max_sum=sum;
        //Now slide the window 
        //remove from left and add it to right
        int j=0;
        while(i<nums.size()){
            sum-=nums[j++];
            sum+=nums[i++];
            max_sum=max(sum,max_sum);
        }
        return max_sum/k;
    }
};