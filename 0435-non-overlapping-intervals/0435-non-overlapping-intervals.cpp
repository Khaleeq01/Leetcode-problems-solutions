class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        int total=0;
        int last=INT_MIN;
        for(int i=0;i<n;i++){
            if(intervals[i][0]>=last){
                last=intervals[i][1];
            }
            else{
                total++;
            }
        }
        return total;
    }
};