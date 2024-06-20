class Solution {
public:
    int isOkAtDis(int mid,vector<int>& position,int m){
        int countOfBallPlaced=1,prevId=0;
        for(int i=0;i<position.size();i++){
            if(position[i]-position[prevId]>=mid){
                countOfBallPlaced++;
                prevId=i;
            }
        }
        return (countOfBallPlaced>=m);
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1,r=*max_element(position.begin(),position.end()),ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(isOkAtDis(mid,position,m)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};