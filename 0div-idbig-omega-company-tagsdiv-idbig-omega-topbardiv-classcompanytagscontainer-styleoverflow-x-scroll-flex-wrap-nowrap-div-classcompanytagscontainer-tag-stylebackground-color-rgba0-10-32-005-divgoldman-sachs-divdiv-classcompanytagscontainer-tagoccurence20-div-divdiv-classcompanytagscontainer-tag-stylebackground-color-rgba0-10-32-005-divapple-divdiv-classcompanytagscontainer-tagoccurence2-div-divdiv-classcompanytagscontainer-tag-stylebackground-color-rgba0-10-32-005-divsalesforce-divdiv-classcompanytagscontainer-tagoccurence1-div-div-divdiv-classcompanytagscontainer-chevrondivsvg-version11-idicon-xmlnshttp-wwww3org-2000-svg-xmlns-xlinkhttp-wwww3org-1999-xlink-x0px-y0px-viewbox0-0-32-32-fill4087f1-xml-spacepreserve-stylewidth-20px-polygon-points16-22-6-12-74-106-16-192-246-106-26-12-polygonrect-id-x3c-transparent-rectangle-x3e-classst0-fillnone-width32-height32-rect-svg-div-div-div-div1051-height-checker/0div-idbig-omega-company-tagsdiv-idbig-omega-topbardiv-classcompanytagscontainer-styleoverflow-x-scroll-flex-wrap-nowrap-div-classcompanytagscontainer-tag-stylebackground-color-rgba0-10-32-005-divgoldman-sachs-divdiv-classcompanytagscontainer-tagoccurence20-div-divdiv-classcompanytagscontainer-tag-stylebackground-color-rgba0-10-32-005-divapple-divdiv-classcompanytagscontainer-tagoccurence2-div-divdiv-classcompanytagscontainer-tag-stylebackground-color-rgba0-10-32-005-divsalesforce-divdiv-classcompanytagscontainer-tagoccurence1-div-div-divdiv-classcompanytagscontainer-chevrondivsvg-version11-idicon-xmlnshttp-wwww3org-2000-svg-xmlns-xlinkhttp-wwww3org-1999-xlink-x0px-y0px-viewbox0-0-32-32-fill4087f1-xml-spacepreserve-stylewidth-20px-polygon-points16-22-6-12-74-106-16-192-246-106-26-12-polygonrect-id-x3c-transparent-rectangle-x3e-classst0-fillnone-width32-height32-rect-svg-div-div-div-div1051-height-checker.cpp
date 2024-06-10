class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>hCopy(heights);
        int ans=0;
        sort(hCopy.begin(),hCopy.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=hCopy[i])
                ans++;
        }
        return ans;
    }
};