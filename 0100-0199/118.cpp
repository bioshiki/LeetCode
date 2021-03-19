class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r={{1}};
        if(numRows==1){
            return r;
        }
        vector<int> row;
        //loop start from 2nd row
        for(int i=1;i<numRows;i++){
            row.clear();
            row.push_back(1);
            for(int j=1;j<i;j++){
                row.push_back(r[i-1][j-1]+r[i-1][j]);
            }
            row.push_back(1);
            r.push_back(row);
        }
        return r;
    }
};
