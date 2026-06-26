class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols  = matrix[0].size();
        vector<bool>rowM(rows,false);
        vector<bool>colM(cols,false);
        for(int i =0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    rowM[i] = true;
                    colM[j] = true;
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(rowM[i] || colM[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
