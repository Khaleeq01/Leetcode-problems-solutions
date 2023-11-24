class Solution {
public:
    bool check(vector<int>& arr){
       int maxEl=INT_MIN;
       int minEl=INT_MAX;
       int n=arr.size();
        unordered_set<int>s;
        for(auto el:arr){
            maxEl=max(maxEl,el);
            minEl=min(minEl,el);
            s.insert(el);
        }
        if((maxEl-minEl)%(n-1)!=0) return false;
        int d=(maxEl-minEl)/(n-1);
        int curr=minEl+d;
        while(curr<maxEl){
            if(s.find(curr)==s.end()) return false;
            curr+=d;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>arr(begin(nums)+l[i],begin(nums)+r[i]+1);
            ans.push_back(check(arr));
        }
        return ans;
    }
};