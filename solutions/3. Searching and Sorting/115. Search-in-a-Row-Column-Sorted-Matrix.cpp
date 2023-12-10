// ******** Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not. ********

// <======== Example ========>
// Input: n = 3, m = 3, x = 62, matrix[][] = {{ 3, 30, 38}, {36, 43, 60}, {40, 51, 69}}
// Output: 0

// Input: n = 1, m = 6, x = 55, matrix[][] = {{18, 21, 27, 38, 55, 67}}
// Output: 1


// Expected Time Complexity ==> O(N + M)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) {
        int i = 0, j = n-1;
        while(i < n && j >= 0) {
            if(matrix[i][j] == x) {
                return true;
            }
            else if(matrix[i][j] > x) {
                j--;
            }
            else {
                i++;
            }
        }
        
        return false;
    }
};