class Solution {
public:
   int minDistanceUtil(int i,int j,string& s1,string& s2,vector<vector<int>>& dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
       if(dp[i][j]!=-1)
           return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j]=minDistanceUtil(i-1,j-1,s1,s2,dp);
        }
         return dp[i][j]=1+min(minDistanceUtil(i-1,j,s1,s2,dp),min(minDistanceUtil(i,j-1,s1,s2,dp),minDistanceUtil(i-1,j-1,s1,s2,dp)));   
    }
    int minDistance(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return minDistanceUtil(n-1,m-1,str1,str2,dp);
    }
};