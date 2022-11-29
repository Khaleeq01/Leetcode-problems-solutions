class Solution {
public:
    int solve(vector<int> &nums){
        int n=nums.size();
    //base case
    int prev2=0;
  int prev=nums[0];
 for(int i=1;i<n;i++){
     int incl=prev2+nums[i];
    int excl=prev+0;
    int cur_i=max(incl,excl);
     prev2=prev;
     prev=cur_i;
 }
    return prev;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp1;
        vector<int>temp2;
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)
                temp1.push_back(nums[i]);
            if(i!=n-1)
                temp2.push_back(nums[i]);
        }
        int ans1=solve(temp1);
        int ans2=solve(temp2);
        return max(ans1,ans2);
    }
};