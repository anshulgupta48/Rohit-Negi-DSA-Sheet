// ******** Given an array A[] of N integers and a range(L, R). The task is to find the number of subarrays having sum in the range L to R (inclusive) ********

// <======== Example ========>
// Input: N = 3, L = 3, R = 8, A[] = {1, 4, 6}
// Output: 3

// Input: N = 4, L = 4, R = 13, A[] = {2, 3, 5, 8}
// Output: 6




class Solution {
  public:
    long long solve(long long N, vector<int> &A, long long x) {
        long long ans = 0, sum = 0;
        long long start = 0, end = 0;
        
        for(end = 0; end < N; end++) {
            sum += A[end];
            while(sum > x) {
                sum = sum - A[start];
                start++;
            }
            
            ans += (end-start+1);
        }
        
        return ans;
    }
  
  
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        long long count1 = solve(N, A, R);
        long long count2 = solve(N, A, L-1);
        return (count1 - count2);
    }
};