class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size(),m=worker.size();
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({difficulty[i],profit[i]});
        }
        sort(vp.begin(),vp.end());
        sort(worker.begin(),worker.end());
        
        int proSum=0,maxProfit=0,j=0;
        for(int i=0;i<m;i++){
            while(j<m && vp[j].first<=worker[i]){
                maxProfit=max(maxProfit,vp[j].second);
                j++;
            }
            proSum+=maxProfit;
        }
        return proSum;
    }
};