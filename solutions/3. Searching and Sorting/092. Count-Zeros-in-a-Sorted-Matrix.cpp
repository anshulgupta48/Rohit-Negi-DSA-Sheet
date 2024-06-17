// ******** Given a N X N binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix. ********

// <======== Example ========>
// Input: N = 3 A = {{0, 0, 0}, {0, 0, 1}, {0, 1, 1}}
// Output: 6

// Input: N = 2 A = {{1, 1}, {1, 1}}
// Output: 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	int countZeros(vector<vector<int>>A) {
		int n = A.size();
	    int count = 0;
	    int i = 0;
	    int j = n-1;
	    
	    while(i < n && j >= 0) {
	        if(A[i][j] == 0) {
	            count += (j + 1);
	            i++;
	        }
	        else {
	            j--;
	        }
	    }
	    
	    return count;
	}
};