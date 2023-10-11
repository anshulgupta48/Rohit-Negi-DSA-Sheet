// ******** Given a matrix mat of size R*C with 0 and 1s, find the largest rectangle of all 1s in the matrix. The rectangle can be formed by swapping any pair of columns of given matrix ********

// <======== Example ========>
// Input: R = 3, C = 5, mat[][] = {{0, 1, 0, 1, 0}, {0, 1, 0, 1, 1}, {1, 1, 0, 1, 0}};
// Output: 6

// Input: R = 4, C = 5, mat[][] = {{0, 1, 0, 1, 0}, {0, 1, 1, 1, 1}, {1, 1, 1, 0, 1}, {1, 1, 1, 1, 1}};
// Output: 9


// Expected Time Complexity ==> O(R*(R + C))
// Expected Auxiliary Space ==> O(R*C)




class Solution{
public:
	int maxArea(vector<bool> mat[], int r, int c) {
	    vector<vector<int>> temp(r, vector<int> (c, 0));
	    for(int i = 0; i < r; i++) {
	       for(int j = 0; j < c; j++) {
	           if(i == 0) {
	               temp[i][j] = mat[i][j];
	           }
	           else {
	               temp[i][j] = (mat[i][j] == 0) ? 0 : (temp[i-1][j] + mat[i][j]);
	           }
	       }
	    }
	    
	    
	    int ans = 0;
	    for(int i = 0; i < r; i++) {
	        sort(temp[i].rbegin(), temp[i].rend());
	        for(int j = 0; j < c; j++) {
	            ans = max(ans, temp[i][j] * (j+1));
	        }
	     }
	     
	     
	     return ans;
	}
};