class Solution {
public:
    long long reqhours(int rate,vector<int>& piles){
        long long hour=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            hour+=piles[i]/rate;
            if(piles[i]%rate)
                hour++;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max_ele=INT_MIN;
        for(int i=0;i<n;i++){
            max_ele=max(max_ele,piles[i]);
        }
        int s=1,e=max_ele;
        int ans=INT_MAX;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long hours=reqhours(mid,piles);
            if(hours<=h){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};