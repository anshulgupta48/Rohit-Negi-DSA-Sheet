// ******** Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1 ********

// <======== Example ========>
// Input: R = 2, C = 2, matrix[][] = {{1, 0}, {0, 0}}
// Output: 1 1 1 0

// Input: R = 4, C = 3, matrix[][] = {{ 1, 0, 0}, { 1, 0, 0}, { 1, 0, 0}, { 0, 0, 0}}
// Output: 1 1 1 1 1 1 1 1 1 1 0 0


// Expected Time Complexity ==> O(R * C)
// Expected Auxiliary Space ==> O(R + C) 




class Solution{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix){
        int row = matrix.size();
        int col = matrix[0].size();
        int row_flag = 0;
        int col_flag = 0;
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(i == 0 && matrix[i][j] == 1) {
                    row_flag = 1;
                }
                
                if (j == 0 && matrix[i][j] == 1) {
                    col_flag = 1;
                }
                
                if (matrix[i][j] == 1) {
                    matrix[0][j] = 1;
                    matrix[i][0] = 1;
                }
            }
        }
            
            
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[0][j] == 1 || matrix[i][0] == 1) {
                    matrix[i][j] = 1;
                }
            }
        }
            
            
        if (row_flag == 1) {
            for (int i = 0; i < col; i++) {
                matrix[0][i] = 1;
            }
        }
            
            
        if (col_flag == 1) {
            for (int i = 0; i < row; i++) {
                matrix[i][0] = 1;
            }
        }
    }
};