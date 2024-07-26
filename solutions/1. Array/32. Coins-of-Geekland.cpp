// ******** In Geekland there is a grid of coins of size N x N. You have to find the maximum sum of coins in any sub-grid of size K x K ********
// Note --> Coins of the negative denomination are also possible at Geekland.

// <======== Example ========>
// Input: N = 5, K = 3 , mat[[]] = {1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 8, 6, 7, 3}, {4, 4, 4, 4, 4}, {5, 5, 5, 5, 5}
// Output: 48

// Input: N = 1, K = 1, mat[[]] = {{4}} 
// Output: 4


// Expected Time Complexity ==> O(N2) 
// Expected Auxiliary Space ==> O(N2)




class Solution{
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        int maxSum = INT_MIN;
        int temp[N+1][N+1];
        
        for(int i = 0; i <= N; i++) {
            for(int j = 0; j <= N; j++) {
                temp[i][0] = 0;
                temp[0][j] = 0;
            }
        }
        
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                temp[i][j] = mat[i-1][j-1] + temp[i-1][j] + temp[i][j-1] - temp[i-1][j-1];
                if(i >= K && j >= K) {
                    int sum = temp[i][j] - temp[i-K][j] - temp[i][j-K] + temp[i-K][j-K];
                    maxSum = max(maxSum, sum);
                }
            }
        }
        
        return maxSum;
    }  
};