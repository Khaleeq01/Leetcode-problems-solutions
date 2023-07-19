class Solution {
public:
    struct Node{
        Node* child[26];
        bool isTerminal;
        Node(){
            isTerminal=false;
            for(int i=0;i<26;i++)
                child[i]=NULL;
        }
    };
    Node* root= new Node();
    //insert all position
    void insert(string &s){
        int n=s.size();
        Node* curr=root;
        for(int i=0;i<n;i++){
            int index=s[i]-'a';
            if(curr->child[index]==NULL){
                curr->child[index]=new Node();
            }
            curr=curr->child[index];
        }
        curr->isTerminal=true;
    }
    //serach if any forbidden present starting with word[l]
    bool serach(string &word,int l,int r){
        Node*curr=root;
        for(;l<=r;l++){
            int index=word[l]-'a';
            if(curr->child[index]==NULL) return false;
            curr=curr->child[index];
            if(curr->isTerminal==true) return true;
        }
        return false;
    }
    
    int longestValidSubstring(string word, vector<string>& forbidden) {
        int n=word.size();
        //trie data structure
        for(auto &words:forbidden) insert(words);
        int ans=0;
        int j=n-1;
        for(int i=n-1;i>=0;i--){
            while(i<=j && serach(word,i,j)) j--;
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};