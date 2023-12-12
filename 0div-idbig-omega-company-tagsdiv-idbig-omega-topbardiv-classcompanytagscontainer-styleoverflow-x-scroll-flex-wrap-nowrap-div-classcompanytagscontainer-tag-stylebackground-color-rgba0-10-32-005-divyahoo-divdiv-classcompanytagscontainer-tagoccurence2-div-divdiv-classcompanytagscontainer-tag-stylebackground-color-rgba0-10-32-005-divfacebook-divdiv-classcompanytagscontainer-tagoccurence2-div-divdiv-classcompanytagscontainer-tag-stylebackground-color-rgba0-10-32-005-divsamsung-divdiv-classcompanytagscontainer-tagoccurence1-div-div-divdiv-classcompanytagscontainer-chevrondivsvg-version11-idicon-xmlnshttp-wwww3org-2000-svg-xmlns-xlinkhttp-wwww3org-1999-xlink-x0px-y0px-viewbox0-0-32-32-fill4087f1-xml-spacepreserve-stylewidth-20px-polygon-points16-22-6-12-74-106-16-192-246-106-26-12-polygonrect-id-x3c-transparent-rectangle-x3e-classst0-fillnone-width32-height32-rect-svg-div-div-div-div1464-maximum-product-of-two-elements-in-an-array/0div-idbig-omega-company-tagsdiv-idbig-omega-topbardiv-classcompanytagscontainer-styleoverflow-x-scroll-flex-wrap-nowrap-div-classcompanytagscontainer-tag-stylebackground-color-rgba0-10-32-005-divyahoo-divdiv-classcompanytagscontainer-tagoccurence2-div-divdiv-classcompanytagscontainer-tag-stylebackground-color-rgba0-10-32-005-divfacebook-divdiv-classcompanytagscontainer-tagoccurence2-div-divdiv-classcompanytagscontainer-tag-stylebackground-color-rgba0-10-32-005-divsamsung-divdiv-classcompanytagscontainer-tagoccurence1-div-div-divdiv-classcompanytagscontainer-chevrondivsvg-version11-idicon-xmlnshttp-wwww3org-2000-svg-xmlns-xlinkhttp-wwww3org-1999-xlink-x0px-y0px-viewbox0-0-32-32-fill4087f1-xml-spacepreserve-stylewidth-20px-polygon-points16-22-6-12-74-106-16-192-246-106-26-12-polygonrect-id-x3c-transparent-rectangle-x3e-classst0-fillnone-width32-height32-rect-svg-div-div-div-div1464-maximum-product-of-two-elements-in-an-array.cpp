class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int largest=0,secondLargest=0;
        for(auto num:nums){
            if(num>largest){
                secondLargest=largest;
                largest=num;
            }
            else
                secondLargest=max(num,secondLargest);
        }
        return (largest-1)*(secondLargest-1);
    }
};