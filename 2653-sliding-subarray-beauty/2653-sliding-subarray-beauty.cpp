class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
       vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<k-1;i++){
            mp[nums[i]]++;
        }
        for(int i=k-1;i<nums.size();i++){
            mp[nums[i]]++;
            int total=0;
            int num;
            for(auto y:mp){
                total+=y.second;
                num=y.first;
                if(total>=x){
                    break;
                }
            }
            if(nums[i-k+1]==1){
                mp.erase(nums[i-k+1]);
            }
            else{
                mp[nums[i-k+1]]--;
            }
            ans.push_back(min(0,num));
        }
        return ans;
    }
};