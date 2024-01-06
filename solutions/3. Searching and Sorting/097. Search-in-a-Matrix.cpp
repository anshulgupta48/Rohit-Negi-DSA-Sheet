// ******** Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not. ********

// <======== Example ========>
// Input: N = 3, M = 3, mat[][] = 3 30 38 44 52 54 57 60 69, X = 62
// Output: 0

// Input: N = 1, M = 6, mat[][] = 18 21 27 38 55 67, X = 55
// Output: 1


// Expected Time Complexity ==> O(N+M)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X) {
	    int i = 0;
	    int j = M-1;
	    
	    while(i < N && j >= 0) {
	        if(mat[i][j] == X) {
	            return 1;
	        }
	        else if(mat[i][j] < X) {
	            i++;
	        }
	        else {
	            j--;
	        }
	    }
	    
	    return 0;
	}
};