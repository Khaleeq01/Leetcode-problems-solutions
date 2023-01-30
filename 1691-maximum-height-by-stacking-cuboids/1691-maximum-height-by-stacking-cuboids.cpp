class Solution {
public:
    bool check(vector<int>base,vector<int>newBox){
        if(newBox[0]<=base[0] && newBox[1]<=base[1] && newBox[2]<=base[2]){
            return true;
        }
        return false;
    }
    int solveSpaceOP(int n,vector<vector<int>>& a) {
        vector<int>currRow(n+1,0);
        vector<int>nextRow(n+1,0);
        for(int curr=n-1;curr>=0;curr--){
            for(int prev=curr-1;prev>=-1;prev--){
                    int notTake=0+nextRow[prev+1];
        int take=0;
        if(prev==-1 || check(a[curr],a[prev])){
            take=a[curr][2]+nextRow[curr+1];
        }
         currRow[prev+1]=max(notTake,take);
            }
            nextRow=currRow;
        }
        return nextRow[0];
    }
    int maxHeight(vector<vector<int>>& cuboids) {
        // sort all dimensions for every cuboid
        for(auto& a:cuboids){
            sort(a.begin(),a.end());
        }
        //sort all cuboid base on w or l
        sort(cuboids.begin(),cuboids.end());
        //use LIS logic
        int n=cuboids.size();
        return solveSpaceOP(n,cuboids);
    }
};