class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n=nums.size();
         // left[i] will store the length of increasing subarray starting from nums[i] on left side
       vector<int>left(n,1);
        //fill the left subarray
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                left[i]=left[i-1]+1;
            }
        }
          // right[i] will store the length of increasing subarray starting from nums[i] on right side
        vector<int>right(n,1);
        //fill the right array
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                right[i]=right[i+1]+1;
            }
        }
        //find the result
        vector<int>ans;
        for(int i=k;i<=n-k-1;i++){
            if(left[i-1]>=k && right[i+1]>=k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};