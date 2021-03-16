class Solution {
    int numCol=0;
    int numRow=0;
public:
    void save(vector<vector<char>>& board, int row, int col){
        if(row<0||row>=numRow||col<0||col>=numCol||board[row][col]!='O'){
            return;
        }
            board[row][col]='o';
            save(board,row-1,col);
            save(board,row+1,col);
            save(board,row,col-1);
            save(board,row,col+1);
    }
    void solve(vector<vector<char>>& board) {
        numCol=board[0].size();
        numRow=board.size();
        if(numCol>2&&numRow>2){
            //save
            for(int i=0;i<numCol;i++){
                if(board[0][i]=='O'){
                    save(board,0,i);
                }
            }
            for(int i=0;i<numCol;i++){
                if(board[numRow-1][i]=='O'){
                    save(board,numRow-1,i);
                }
            }
            for(int i=1;i<numRow-1;i++){
                if(board[i][0]=='O'){
                    save(board,i,0);
                }
            }
            for(int i=1;i<numRow-1;i++){
                if(board[i][numCol-1]=='O'){
                    save(board,i,numCol-1);
                }
            }
            //flip
            for(int i=0;i<numRow;i++){
                for(int j=0;j<numCol;j++){
                    if(board[i][j]=='O'){
                        board[i][j]='X';
                    }else if(board[i][j]=='o'){
                        board[i][j]='O';
                    }
                }
            }
        }
    }
};
