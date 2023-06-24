class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(canPlace(i,j,board,c)){
                            board[i][j]=c;
                            if(solve(board)==true)
                            return true;
                            else
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool canPlace(int row,int col,vector<vector<char>> board,char digit){
        int i;
        for(i=0;i<9;i++){
            if(board[i][col]==digit)
            return false;
            if(board[row][i]==digit)
            return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==digit)
            return false;
        }
        return true;
    }
};
