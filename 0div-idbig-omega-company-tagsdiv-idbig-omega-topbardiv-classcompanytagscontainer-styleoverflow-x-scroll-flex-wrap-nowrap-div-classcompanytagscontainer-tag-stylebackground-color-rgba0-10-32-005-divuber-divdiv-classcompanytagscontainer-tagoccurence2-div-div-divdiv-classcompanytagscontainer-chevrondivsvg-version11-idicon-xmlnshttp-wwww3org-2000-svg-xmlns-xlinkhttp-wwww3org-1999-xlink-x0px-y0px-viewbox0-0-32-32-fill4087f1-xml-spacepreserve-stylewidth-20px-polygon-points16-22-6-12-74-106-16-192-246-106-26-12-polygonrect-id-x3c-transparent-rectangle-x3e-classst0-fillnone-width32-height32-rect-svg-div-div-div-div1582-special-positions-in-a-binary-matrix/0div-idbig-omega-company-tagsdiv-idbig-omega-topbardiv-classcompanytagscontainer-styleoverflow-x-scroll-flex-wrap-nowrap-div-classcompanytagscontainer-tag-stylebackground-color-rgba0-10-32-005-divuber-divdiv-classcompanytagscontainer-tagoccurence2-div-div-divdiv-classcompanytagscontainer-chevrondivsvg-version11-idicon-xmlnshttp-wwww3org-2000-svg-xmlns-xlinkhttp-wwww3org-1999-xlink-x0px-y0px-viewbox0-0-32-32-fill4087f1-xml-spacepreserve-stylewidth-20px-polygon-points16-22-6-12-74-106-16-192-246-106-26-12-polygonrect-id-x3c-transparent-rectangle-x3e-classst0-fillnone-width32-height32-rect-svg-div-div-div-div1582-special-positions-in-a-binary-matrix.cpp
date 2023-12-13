//Brute force approach
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0,m=mat.size(),n=mat[0].size();
        //iterate through matrix
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(mat[row][col]==0) continue;
                bool good=true;
                //iterate in rows 
                for(int r=0;r<m;r++){
                    if(r!=row && mat[r][col]==1){
                        good=false;
                        break;
                    }
                }
                //iterate in cols 
                for(int c=0;c<n;c++){
                    if(c!=col && mat[row][c]==1){
                        good=false;
                        break;
                    }
                }
                if(good) count++;
            }
        }
        return count;
    }
};

//T.C =O(m*n(m+n))
//S.C= O(1)