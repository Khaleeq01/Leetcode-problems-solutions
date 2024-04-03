class Solution {
public:
    bool dfs(vector<vector<char>>&board,int i,int j,int idx,string& word){
        if(idx==word.length()-1) return true;
        char ch = board[i][j];
        board[i][j] = '*';
        
        int r = board.size(), c = board[0].size();
        
        if(i-1>=0 && board[i-1][j] != '*' &&  board[i-1][j]==word[idx+1] &&  dfs(board,i-1,j,idx+1,word))
            return true;
        if(i+1<=r-1 && board[i+1][j] != '*' &&  board[i+1][j]==word[idx+1] && dfs(board,i+1,j,idx+1,word))
            return true;
        if(j-1>=0 && board[i][j-1] != '*' &&  board[i][j-1]==word[idx+1] && dfs(board,i,j-1,idx+1,word))
            return true;
        if(j+1<=c-1 && board[i][j+1] != '*' &&  board[i][j+1]==word[idx+1] && dfs(board,i,j+1,idx+1,word))
            return true;
        
        board[i][j] = ch;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size(), c = board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==word[0] && dfs(board,i,j,0,word))
                    return true;
            }
        }
        
        return false;
    }
};