class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        //set to store uniqueCity Paths
        unordered_set<string> outgoingPath;
        for(int i=0;i<paths.size();i++){
            outgoingPath.insert(paths[i][0]);
        }
        for(int i=0;i<paths.size();i++){
            string curr=paths[i][1];
            //if curr string is not present in set then take it in our path
            if(outgoingPath.find(curr)==outgoingPath.end())
                return curr;
        }
        return "";
    }
};