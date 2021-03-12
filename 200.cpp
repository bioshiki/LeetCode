//similar with 130
class Solution {
    int maxRow=0;
    int maxCol=0;
public:
    void mark(vector<vector<char>>& grid, int row, int col){
        if(row<0||col<0||row>=maxRow||col>=maxCol||grid[row][col]!='1'){
            return;
        }
        grid[row][col]='0';
        mark(grid,row-1,col);
        mark(grid,row+1,col);
        mark(grid,row,col-1);
        mark(grid,row,col+1);

    }
    int numIslands(vector<vector<char>>& grid) {
        maxRow=grid.size();
        maxCol=grid[0].size();
        int numOfIsland=0;
        for(int i=0;i<maxRow;i++){
            for(int j=0;j<maxCol;j++){
                if(grid[i][j]=='1'){
                    numOfIsland++;
                    mark(grid,i,j);
                }
            }
        }
        return numOfIsland;
    }
};
