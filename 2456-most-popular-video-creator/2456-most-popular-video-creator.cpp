class Solution {
public:
    struct video{
        long sum=0;
        string small;
        int max_views=0;
    };
    vector<vector<string>> mostPopularCreator(vector<string>& c, vector<string>& ids, vector<int>& views) {
        unordered_map<string,video>mp;
        long count=0;
        for(int i=0;i<c.size();i++){
            //check if creator is present or not
             if (!mp.count(c[i])){
                mp[c[i]]={views[i],ids[i],views[i]};
                count=max(count,mp[c[i]].sum);
                continue;
            }
            //if already present update all parameters
            mp[c[i]].sum+=views[i];
            if(mp[c[i]].max_views<views[i]||mp[c[i]].max_views==views[i] && ids[i]<mp[c[i]].small){
                mp[c[i]].max_views=views[i];
                mp[c[i]].small=ids[i];
            }
            count=max(count,mp[c[i]].sum);
        }
        //extract all words with highest views
        vector<vector<string>>ans;
        for(auto &r: mp)
            if(r.second.sum==count)
                ans.push_back({r.first,r.second.small});
        return ans;
    }
};