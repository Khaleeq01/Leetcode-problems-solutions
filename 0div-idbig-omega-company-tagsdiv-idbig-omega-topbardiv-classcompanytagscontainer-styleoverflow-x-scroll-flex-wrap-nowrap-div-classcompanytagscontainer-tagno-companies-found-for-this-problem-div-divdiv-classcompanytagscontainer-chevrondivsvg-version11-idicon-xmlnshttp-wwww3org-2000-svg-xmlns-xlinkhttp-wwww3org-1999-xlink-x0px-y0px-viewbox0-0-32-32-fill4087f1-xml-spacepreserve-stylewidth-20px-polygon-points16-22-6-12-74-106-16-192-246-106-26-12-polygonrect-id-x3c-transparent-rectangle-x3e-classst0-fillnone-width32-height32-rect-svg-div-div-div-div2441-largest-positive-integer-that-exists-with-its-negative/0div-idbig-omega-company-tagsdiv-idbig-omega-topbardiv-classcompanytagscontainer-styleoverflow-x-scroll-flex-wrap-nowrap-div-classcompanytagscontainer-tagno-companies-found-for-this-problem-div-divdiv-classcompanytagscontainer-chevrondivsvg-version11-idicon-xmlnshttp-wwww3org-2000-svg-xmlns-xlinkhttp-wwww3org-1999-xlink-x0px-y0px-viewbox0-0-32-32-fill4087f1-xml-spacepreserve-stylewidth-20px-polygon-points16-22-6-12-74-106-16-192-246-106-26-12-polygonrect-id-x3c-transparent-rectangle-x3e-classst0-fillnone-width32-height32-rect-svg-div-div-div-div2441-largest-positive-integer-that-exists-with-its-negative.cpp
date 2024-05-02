class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        int res=-1;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            if(st.find(-1*nums[i])!=st.end()){
                res=max(res,abs(nums[i]));
            }
        }
        return res;
    }
};