class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
      vector<int>ans;// to store ans
        int k=0; // counter to keep track of index
        //iterate through variables
        for(const auto& x:variables){
            int a=x[0],b=x[1],c=x[2],m=x[3];
            int n1=1;
            //calculate (a^b % 10)
            for(int i=0;i<b;i++){
                 n1=(n1*a)%10;
            }
            //calculate (b^c % 10)
            int n2=1;
            for(int i=0;i<c;i++){
                n2=(n1*n2)%m;
            }
            if(n2==target){
                ans.push_back(k);
            }
            k++;// move index forward 
        }
        return ans;
    }
};