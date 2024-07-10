class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>s;
        for(auto log:logs){
            if(log=="../"){
                if(!s.empty()) s.pop();
            }
            else if(log!="./"){
                s.push(log.substr(0,s.size()-1));
            }
        }
        return s.size();
    }
};