//bad runtime, need improve
class Solution {
    int maxRow=0;
public:
    void rotate(vector<vector<int>>& matrix, int row, int col){
        int t=matrix[row][col];
        matrix[row][col]=matrix[maxRow-1-col][row];
        matrix[maxRow-1-col][row]=matrix[maxRow-1-row][maxRow-col-1];
        matrix[maxRow-1-row][maxRow-col-1]=matrix[col][maxRow-row-1];
        matrix[col][maxRow-row-1]=t;
        
    }
    void rotate(vector<vector<int>>& matrix) {
        maxRow=matrix.size();
        for(int i=0;i<maxRow/2;i++){
            for(int j=i;j<maxRow-i-1;j++){
                rotate(matrix,i,j);
            }
        }
    }
};
