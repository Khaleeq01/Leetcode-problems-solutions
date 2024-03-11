class Solution {
public:
    string customSortString(string order, string s) {
        //store char s and its freq 
        unordered_map<char,int>freq;
        for(auto el:s) freq[el]++;
        
        string ans="";
        //iterate order character 
        for(auto el:order){
            while(freq[el]-- > 0) ans.push_back(el);
        }
        //push remaining character of order and s in ans el is key and fr is freq
        for(auto [el,fr]:freq){
            while(fr-- > 0) ans.push_back(el);
        }
        return ans;
    }
};