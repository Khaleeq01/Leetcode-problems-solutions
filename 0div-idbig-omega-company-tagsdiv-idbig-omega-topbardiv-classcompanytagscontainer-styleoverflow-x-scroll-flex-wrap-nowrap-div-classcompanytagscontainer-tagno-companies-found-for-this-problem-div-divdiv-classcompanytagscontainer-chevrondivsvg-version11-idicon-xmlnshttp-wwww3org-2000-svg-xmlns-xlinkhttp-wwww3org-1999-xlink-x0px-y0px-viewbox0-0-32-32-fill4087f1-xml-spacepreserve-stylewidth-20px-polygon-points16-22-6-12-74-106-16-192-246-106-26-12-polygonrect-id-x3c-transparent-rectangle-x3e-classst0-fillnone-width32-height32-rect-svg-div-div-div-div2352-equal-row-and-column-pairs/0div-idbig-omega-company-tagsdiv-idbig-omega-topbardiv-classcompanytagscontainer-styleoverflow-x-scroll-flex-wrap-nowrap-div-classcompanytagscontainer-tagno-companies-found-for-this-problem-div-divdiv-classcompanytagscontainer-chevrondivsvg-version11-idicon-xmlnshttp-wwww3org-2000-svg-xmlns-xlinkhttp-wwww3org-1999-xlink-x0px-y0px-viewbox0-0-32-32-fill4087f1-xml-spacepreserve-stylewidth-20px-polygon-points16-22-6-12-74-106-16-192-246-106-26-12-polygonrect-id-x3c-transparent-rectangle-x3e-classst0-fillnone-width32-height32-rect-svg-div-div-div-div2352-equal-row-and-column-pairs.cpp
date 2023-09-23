class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            vector<int>T;
            for(int j=0;j<grid[0].size();j++){
                T.push_back(grid[j][i]);
            }
            ans+=count(grid.begin(),grid.end(),T);
        }
        return ans;
    }
};