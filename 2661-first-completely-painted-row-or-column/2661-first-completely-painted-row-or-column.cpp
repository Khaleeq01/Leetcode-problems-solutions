class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
   int m=mat.size(),n=mat[0].size();
     vector<int>rowFill(m,0);
       vector<int>colFill(n,0);
        
        vector<int>rowIdxMap((m*n)+1);
        vector<int>colIdxMap((m*n)+1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int val=mat[i][j];
                rowIdxMap[val]=i;
                colIdxMap[val]=j;
            }
        }
        for(int i=0;i<arr.size();i++){
            int val=arr[i];
            int rowIdx=rowIdxMap[val];
            int colIdx=colIdxMap[val];
            rowFill[rowIdx]++;
            colFill[colIdx]++;
            if(rowFill[rowIdx]==n || colFill[colIdx]==m)
                return i;
        }
        return -1;
    }
};