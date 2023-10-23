class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftMin(n,0);
        vector<int>rightMin(n,0);
        //travese for left min
        int mn=nums[0];
        for(int i=1;i<n;i++){
            leftMin[i]=mn;
            mn=min(mn,nums[i]);
        }
        //travesre for right min
         mn=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightMin[i]=mn;
            mn=min(mn,nums[i]);
        }
        //calculate sum of leftmin,rightmin and nums[i]
        int ans=INT_MAX;
        for(int j=1;j<n-1;j++){
            int i=leftMin[j];
            int k=rightMin[j];
            if(i<nums[j] && k<nums[j]){
            int sum=i+k+nums[j];
            ans=min(ans,sum);
            }
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
};