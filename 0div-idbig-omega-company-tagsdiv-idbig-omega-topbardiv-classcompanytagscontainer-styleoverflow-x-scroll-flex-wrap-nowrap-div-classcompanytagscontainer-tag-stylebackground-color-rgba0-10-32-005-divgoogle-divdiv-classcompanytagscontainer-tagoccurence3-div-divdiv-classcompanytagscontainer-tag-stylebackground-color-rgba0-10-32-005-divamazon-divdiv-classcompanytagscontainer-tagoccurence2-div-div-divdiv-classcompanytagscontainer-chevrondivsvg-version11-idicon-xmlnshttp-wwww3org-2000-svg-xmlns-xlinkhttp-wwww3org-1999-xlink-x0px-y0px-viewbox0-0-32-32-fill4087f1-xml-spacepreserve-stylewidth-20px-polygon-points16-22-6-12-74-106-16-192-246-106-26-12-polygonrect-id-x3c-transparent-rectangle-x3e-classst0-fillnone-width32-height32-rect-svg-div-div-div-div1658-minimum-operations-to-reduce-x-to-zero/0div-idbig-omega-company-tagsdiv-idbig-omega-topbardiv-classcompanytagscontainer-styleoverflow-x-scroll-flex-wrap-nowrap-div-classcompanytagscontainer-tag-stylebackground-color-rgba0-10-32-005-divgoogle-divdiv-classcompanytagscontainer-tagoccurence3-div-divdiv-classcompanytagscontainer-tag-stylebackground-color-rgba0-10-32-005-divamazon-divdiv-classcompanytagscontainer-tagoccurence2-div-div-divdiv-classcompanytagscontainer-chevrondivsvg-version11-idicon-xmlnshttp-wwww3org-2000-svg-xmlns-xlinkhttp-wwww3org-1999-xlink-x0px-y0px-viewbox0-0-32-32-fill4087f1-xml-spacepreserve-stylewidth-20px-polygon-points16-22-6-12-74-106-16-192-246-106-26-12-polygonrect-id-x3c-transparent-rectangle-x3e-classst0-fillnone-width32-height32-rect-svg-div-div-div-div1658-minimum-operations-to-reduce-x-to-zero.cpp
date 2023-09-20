class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(int i:nums)
            sum+=i;
         int target=sum-x;
        int i=0; //starting index
       bool found=false;
        int curr_sum=0,max_len=0;
        for(int j=0;j<n;j++){
            curr_sum+=nums[j];
            //shrinking our window
            while(i<=j && curr_sum>target){
                curr_sum-=nums[i];
                i++;
            }
            if(curr_sum==target){
                found=true;
                max_len=max(max_len,j-i+1);
            }
        }
        return found ? n-max_len : -1;
    }
};