class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zeroCount=0,oneCount=0;
        for(int student:students){
            if(student==0) zeroCount++;
            else oneCount++;
        }
        for(int sandwich:sandwiches){
            if(sandwich==0 && zeroCount==0) return oneCount;
            if(sandwich==1 && oneCount==0) return zeroCount;
            
            if(sandwich==0) zeroCount--;
            else oneCount--;
        }
        return 0;
    }
};