class Solution {
public:
    int solve(int index, vector<int>& nums, int k, unordered_map<int, int>& mp) {
        // base case
        if (index == nums.size()) return 1;
        
        int taken = 0;
        if (!mp[nums[index] - k] && !mp[nums[index] + k]) {
            mp[nums[index]]++;
            taken = solve(index + 1, nums, k, mp); 
            mp[nums[index]]--;
        }
        
        int notTaken = solve(index + 1, nums, k, mp);
        return taken + notTaken;
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = solve(0, nums, k, mp);
        return ans - 1; // as we don't consider the empty subset
    }
};
