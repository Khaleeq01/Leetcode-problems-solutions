//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long reqhours(int rate,vector<int>& piles){
      int n=piles.size();
      long long hour=0;
      for(int i=0;i<n;i++){
          hour+=piles[i]/rate;
          if(piles[i]%rate)
          hour++;
      }
      return hour;
  }
    int Solve(int N, vector<int>& piles, int H) {
        int max_ele=INT_MIN;
        for(int i=0;i<N;i++){
            max_ele=max(max_ele,piles[i]);
        }
        int ans=INT_MAX;
        int s=1,e=max_ele;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long hours=reqhours(mid,piles);
            if(hours<=H){
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

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends