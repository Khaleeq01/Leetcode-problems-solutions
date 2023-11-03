class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=0;// stream pointer
        for(int num:target){ //num is target pointer
            while(i<num-1){
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
            //if stream pointer matches with target pointer
            ans.push_back("Push");
            i++;
        }
        return ans;
    }
};