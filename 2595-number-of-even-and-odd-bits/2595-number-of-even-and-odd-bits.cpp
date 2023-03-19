class Solution {
public:
    vector<int> evenOddBit(int n) {
        int i=0,even=0,odd=0;
        while(n){
            if(n%2!=0){
                if(i%2!=0)
                    odd++;
                else
                    even++;
            }
            n=n/2;
            i++;
        }
        vector<int>ans;
        ans.push_back(even);
        ans.push_back(odd);
        return ans;
    }
};