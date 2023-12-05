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
		int row = A.size();
		int col = A[0].size();
		int ans = 0;
		
		int i = 0;
		int j = col - 1;
		while(i>=0 && i<row && j>=0 && j<col) {
		    if(A[i][j] == 0) {
		        i++;
		        ans += j+1;
		    }
		    else {
		        if(A[i][j] == 1) {
		            j--;
		        }
		    }
		}
		
		return ans;
	}
};