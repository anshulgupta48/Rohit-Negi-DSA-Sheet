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
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> rows(n, 0);
        vector<int> cols(m, 0);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 1) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(rows[i] == 1 || cols[j] == 1) {
                    matrix[i][j] = 1;
                }
            }
        }
    }
};