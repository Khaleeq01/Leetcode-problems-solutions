class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>v1(128,-1);// create two frequency arr of size v1 and v2
        vector<int>v2(128,-1);
        if(s.size()!=t.size()) return false;
        
        for(int i=0;i<s.size();i++){
            // if mapping does not match 
            if(v1[s[i]]!=v2[t[i]]){
                return false;
            }
            //mapping s[i] and v[i] with index i
            v1[s[i]]=v2[t[i]]=i;
        }
        return true;
    }
};