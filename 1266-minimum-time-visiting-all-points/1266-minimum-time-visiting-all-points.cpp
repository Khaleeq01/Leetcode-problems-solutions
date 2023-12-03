class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=0;i<points.size()-1;i++){
            int X=points[i][0];
            int Y=points[i][1];
            int targetX=points[i+1][0];
            int targetY=points[i+1][1];
            ans+=max(abs(X-targetX),abs(Y-targetY));
        }
        return ans;
    }
};