class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i:arr){
            m[i]++;
        }
        set<int>s;
        for(auto it:m){
            s.insert(it.second);
            if(m.size()==s.size())
                return true;
        }
        return false;
    }
};