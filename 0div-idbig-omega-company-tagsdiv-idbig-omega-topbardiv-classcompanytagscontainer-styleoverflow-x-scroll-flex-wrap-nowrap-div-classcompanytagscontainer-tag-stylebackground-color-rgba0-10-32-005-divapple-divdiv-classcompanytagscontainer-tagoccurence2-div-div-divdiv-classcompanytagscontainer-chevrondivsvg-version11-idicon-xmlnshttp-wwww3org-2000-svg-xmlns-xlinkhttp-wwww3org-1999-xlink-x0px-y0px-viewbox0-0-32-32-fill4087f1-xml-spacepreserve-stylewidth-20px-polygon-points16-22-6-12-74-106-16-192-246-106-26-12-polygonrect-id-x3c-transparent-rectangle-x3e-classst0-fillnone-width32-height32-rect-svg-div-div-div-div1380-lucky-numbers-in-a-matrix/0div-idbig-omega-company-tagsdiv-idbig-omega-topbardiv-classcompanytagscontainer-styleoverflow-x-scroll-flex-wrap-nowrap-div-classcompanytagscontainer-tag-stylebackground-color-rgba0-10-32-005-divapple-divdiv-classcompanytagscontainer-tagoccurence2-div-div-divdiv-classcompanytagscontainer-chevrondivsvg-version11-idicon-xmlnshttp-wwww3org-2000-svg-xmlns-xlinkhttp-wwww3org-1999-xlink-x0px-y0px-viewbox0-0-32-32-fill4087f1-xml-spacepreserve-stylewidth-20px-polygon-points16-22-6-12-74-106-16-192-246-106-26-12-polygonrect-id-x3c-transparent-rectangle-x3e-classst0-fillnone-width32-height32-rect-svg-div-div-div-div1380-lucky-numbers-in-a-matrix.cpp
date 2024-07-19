class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int>rowMin;
        for(int i=0;i<n;i++){
              int rMin=INT_MAX;
            for(int j=0;j<m;j++){
                rMin=min(rMin,matrix[i][j]);
            }
            rowMin.push_back(rMin);
        }
        vector<int>colMax;
        for(int i=0;i<m;i++){
                int cMax=INT_MIN;
            for(int j=0;j<n;j++){
                cMax=max(cMax,matrix[j][i]);
            }
            colMax.push_back(cMax);
        }
        vector<int>luckyNumbers;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==rowMin[i] && matrix[i][j]==colMax[j])
                    luckyNumbers.push_back(matrix[i][j]);
            }
        }
        return luckyNumbers;
    }
};