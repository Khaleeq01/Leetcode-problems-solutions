class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        queue<pair<int,int>>q; // to store r and c
        q.push({0,0});
        vector<int>ans;
        while(!q.empty()){
            auto [r,c]=q.front(); //take first element of q
            q.pop();
            ans.push_back(nums[r][c]);
            //first case move c one step downward
            if(c==0 && r+1<nums.size()){
                q.push({r+1,c});
            }
            //second case move row step forward
            if(c+1<nums[r].size()){
                q.push({r,c+1});
            }
        }
        return ans;
    }
};