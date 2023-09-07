class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr_altitude=0,max_altitude=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            curr_altitude+=gain[i];
             max_altitude=max(curr_altitude,max_altitude);
        }
        return max_altitude;
    }
};