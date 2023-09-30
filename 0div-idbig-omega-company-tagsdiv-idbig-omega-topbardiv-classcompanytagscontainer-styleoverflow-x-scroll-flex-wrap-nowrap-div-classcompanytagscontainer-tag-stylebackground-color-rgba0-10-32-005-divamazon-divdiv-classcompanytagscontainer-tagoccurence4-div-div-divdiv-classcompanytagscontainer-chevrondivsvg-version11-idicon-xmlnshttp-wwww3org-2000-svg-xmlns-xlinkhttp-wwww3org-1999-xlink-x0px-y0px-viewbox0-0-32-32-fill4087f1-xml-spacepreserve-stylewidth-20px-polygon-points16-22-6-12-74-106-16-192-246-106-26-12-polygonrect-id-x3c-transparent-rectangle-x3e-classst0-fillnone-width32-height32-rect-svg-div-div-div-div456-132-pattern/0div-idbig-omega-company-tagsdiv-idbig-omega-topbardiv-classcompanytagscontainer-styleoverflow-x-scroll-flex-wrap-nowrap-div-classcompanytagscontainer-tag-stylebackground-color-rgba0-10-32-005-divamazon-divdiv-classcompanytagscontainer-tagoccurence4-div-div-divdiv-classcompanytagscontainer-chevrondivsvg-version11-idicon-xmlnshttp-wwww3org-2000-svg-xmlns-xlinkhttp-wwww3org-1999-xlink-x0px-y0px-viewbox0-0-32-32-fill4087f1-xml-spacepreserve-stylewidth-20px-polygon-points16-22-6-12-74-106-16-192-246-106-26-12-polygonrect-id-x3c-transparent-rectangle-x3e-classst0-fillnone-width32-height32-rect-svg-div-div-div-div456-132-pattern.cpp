class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        int third_element=INT_MIN;//to store nums[k]
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<third_element) return true;
            while(!st.empty() && nums[i]>st.top()){
                third_element=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};