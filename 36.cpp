class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,bool> numbers={
                        {'1',false},
                        {'2',false},
                        {'3',false},
                        {'4',false},
                        {'5',false},
                        {'6',false},
                        {'7',false},
                        {'8',false},
                        {'9',false}
                    };
        
        for(int i=0;i<9;i++){
            //row
            for(char i='1';i<='9';i++){
                numbers[i]=false;
            }
            for (int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(board[i][j]>'9'||board[i][j]<'1'||numbers[board[i][j]]==true){
                        return false;
                    }
                    numbers[board[i][j]]=true;
                }
                
            }
            //column
            for(char i='1';i<='9';i++){
                numbers[i]=false;
            }
            for (int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    if(board[j][i]>'9'||board[j][i]<'1'||numbers[board[j][i]]==true){
                        return false;
                    }
                    numbers[board[j][i]]=true;
                }
                
            }
        }
        //sub 9
        for(int c=0;c<3;c++){
            for(int r=0;r<3;r++){
                for(char i='1';i<='9';i++){
                    numbers[i]=false;
                }
                for (int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        char t=board[i+r*3][j+c*3];
                        if(t!='.'){
                            if(t>'9'||t<'1'||numbers[t]==true){
                                return false;
                            }
                            numbers[t]=true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
