class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v(rowIndex+1,1);
        long int temp=1;
        for(int i=1;i<=rowIndex;i++){
            temp=temp*(rowIndex-i+1)/i; // for calculating 3C0, 3C1 ,3C2, 3C3      
            v[i]=temp;
        }
        return v;
    }
};