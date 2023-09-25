class Solution {
public:
    long long maximumSumOfHeights(vector<int>& a) {
           long long int n=a.size();
           long long int ans=0;
        for(int i=0;i<n;i++){
               long long int sum=a[i];
                int prev=a[i];
            // backward iteration
            for(int j=i-1;j>=0;j--){
                prev=min(a[j],prev);
                sum+=prev;
            }
            //forward iterartion
            prev=a[i];
            for(int j=i+1;j<n;j++){
                prev=min(a[j],prev);
                sum+=prev;
            }
            if(sum>ans) ans=sum;
        }
        return ans;
    }
};