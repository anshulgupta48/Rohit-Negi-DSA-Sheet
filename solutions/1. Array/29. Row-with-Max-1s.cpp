// ******** Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's ********

// <======== Example ========>
// Input: N = 4 , M = 4, Arr[][] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}}
// Output: 2 

// Input: N = 2, M = 2, Arr[][] = {{0, 0}, {1, 1}}
// Output: 1


// Expected Time Complexity ==> O(N+M).
// Expected Auxiliary Space ==> O(1).




class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr) {
	    int n = arr.size();
        int m = arr[0].size();
        int maxRow = -1;
        int maxOnes = 0;
        
        for(int i = 0; i < n; i++) {
            int onesCount = 0;
            for(int j = 0; j < m; j++) {
                if(arr[i][j] == 1) {
                    onesCount++;
                }
            }
            
            if(onesCount > maxOnes) {
                maxRow = i;
                maxOnes = onesCount;
            }
        }
        
        return maxRow;
	}
};
