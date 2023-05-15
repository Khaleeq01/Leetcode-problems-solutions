class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>vis(n,0);
        int index=0,turn=1;
        while(1){
            if(vis[index]==1)
                break;
            vis[index]=1;
            index=(index+turn*k)%n;
            turn++;
        }
        vector<int>ans;
        for(int index=0;index<n;index++){
            if(vis[index]==0)
                ans.push_back(index+1);
        }
        return ans;
    }
};