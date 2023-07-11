class Solution {
public:
    int maxNonDecreasingLength(vector<int>& A, vector<int>& B) {
        int res=1,dp1=1,dp2=1,n=A.size(),t1,t2,t3,t4;
        for(int i=1;i<n;i++){
            t1=A[i-1]<=A[i]?dp1+1:1;
            t2=A[i-1]<=B[i]?dp1+1:1;
            t3=B[i-1]<=A[i]?dp2+1:1;
            t4=B[i-1]<=B[i]?dp2+1:1;
            dp1=max(t1,t3);
            dp2=max(t2,t4);
            res=max(res,max(dp1,dp2));
        }
        return res;
    }
};