class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
       vector<int>next(n+1,0),curr(n+1,0);
        for(int index=n-1;index>=0;index--){
            for(int time=index;time>=0;time--){
                  int include=satisfaction[index]*(time+1)+next[time+1];
        int exclude=0+next[time];
         curr[time]= max(include,exclude);
            }
            next=curr;
        }
        return next[0];
    }
};