class Solution {
public:
    string frequencySort(string s) {
      map<char,int>map; //to store character and its frequency
        vector<pair<int,char>>helper;
        for(auto i:s){
            map[i]++;
        }
        for(auto i:map)
            helper.push_back({i.second,i.first});
            sort(helper.begin(),helper.end(),greater<pair<int,char>>());//sort in decreasing order
        string ans="";
        for(auto i:helper){
            while(i.first--)
                ans+=i.second;
        }
        return ans;
    }
};