class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> ans(n, vector<int>(n, 0));
        int count=0;
        int total=n*n;
        //index intialization
        int startingRow=0;
        int startingCol=0;
        int endingRow=n-1;
        int endingCol=n-1;
         while(count<total){
            //print starting row
            for(int index=startingCol;count<total &&index<=endingCol;index++){
                count++;
                ans[startingRow][index]=count;
            }
            startingRow++;
            //print ending col
            for(int index=startingRow;count<total && index<=endingRow;index++){
                count++;
                ans[index][endingCol]=count;
            }
            endingCol--;
            //print ending Row
            for(int index=endingCol;count<total && index>=startingCol;index--){
                count++;
                ans[endingRow][index]=count;
            }
            endingRow--;
            //print starting Col
            for(int index=endingRow;count<total && index>=startingRow;index--){
                count++;
                ans[index][startingCol]=count;
            }
            startingCol++;
        }
        return ans;
    }
};