class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0; //intially coordinates are(0,0)
       unordered_set<string>s;
        s.insert("0,0");
        for(char c:path){
            if(c=='N') y++;
            else if(c=='E') x++;
            else if(c=='S') y--;
            else x--;
            string coordinate=to_string(x)+","+to_string(y);
            if(s.find(coordinate)!=s.end())
                return true;
            s.insert(coordinate);
        }
        return false;
    }
};