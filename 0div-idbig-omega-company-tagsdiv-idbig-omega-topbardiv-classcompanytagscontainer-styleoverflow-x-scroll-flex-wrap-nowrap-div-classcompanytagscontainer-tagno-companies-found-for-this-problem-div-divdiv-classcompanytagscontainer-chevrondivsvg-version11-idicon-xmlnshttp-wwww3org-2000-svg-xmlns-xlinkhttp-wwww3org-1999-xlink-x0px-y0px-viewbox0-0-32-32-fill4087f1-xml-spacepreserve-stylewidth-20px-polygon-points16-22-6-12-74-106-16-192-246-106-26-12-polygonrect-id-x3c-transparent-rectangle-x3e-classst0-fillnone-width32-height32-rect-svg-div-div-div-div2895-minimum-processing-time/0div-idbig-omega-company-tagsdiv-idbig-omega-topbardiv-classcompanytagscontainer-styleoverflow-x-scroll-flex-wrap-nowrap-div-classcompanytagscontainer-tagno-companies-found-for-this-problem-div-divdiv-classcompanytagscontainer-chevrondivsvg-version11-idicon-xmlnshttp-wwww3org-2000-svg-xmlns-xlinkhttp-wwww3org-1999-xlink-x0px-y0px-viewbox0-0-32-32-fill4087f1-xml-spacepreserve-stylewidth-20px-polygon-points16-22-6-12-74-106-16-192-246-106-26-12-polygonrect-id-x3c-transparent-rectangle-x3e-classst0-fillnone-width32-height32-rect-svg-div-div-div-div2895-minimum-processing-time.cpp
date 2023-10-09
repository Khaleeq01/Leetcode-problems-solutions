class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        long ans=0;
        sort(tasks.begin(),tasks.end());
        sort(processorTime.begin(),processorTime.end());
        reverse(tasks.begin(),tasks.end());
        int n=processorTime.size();
        for(int i=0;i<n;i++){
            long sum=0;
            for(int j=i*4;j<(i*4)+4;j++){
                sum=max(sum,(long)(processorTime[i]+tasks[j]));
            }
            ans=max(sum,ans);
        }
        return ans;
    }
};