class Solution {
public:
    vector<string>res;
    unordered_map<string,int>mp;
    int getMinInvalid(string s){
        stack<char>st;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(')
                st.push('(');
            else if(s[i]==')'){
                if(st.size()>0 && st.top()=='(')
                    st.pop();
                else
                    st.push(')');
            }
            i++;
        }
        return st.size();
    }
    void solve(string s,int minInv){
        if(mp[s]!=0)
            return;
        else
            mp[s]++;
        //base case
        if(minInv<0){
            return;
        }
        if(minInv==0){
            if(!getMinInvalid(s))
                res.push_back(s);
            return;
        }
        for(int i=0;i<s.size();i++){
            string left=s.substr(0,i);
            string rigth=s.substr(i+1);
            solve(left+rigth,minInv-1);
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {
        solve(s,getMinInvalid(s));
        return res;
    }
};