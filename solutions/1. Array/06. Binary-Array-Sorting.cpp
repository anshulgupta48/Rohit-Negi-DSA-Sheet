// ******** Given a binary array A[] of size N. The task is to arrange the array in increasing order ********

// <======== Example ========>
// Input: N = 5, A[] = {1, 0, 1, 1, 0}
// Output: 0 0 1 1 1

// Input: N = 10, A[]  = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 0 0 0 0 1 1 1 1 1 1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    void binSort(int A[], int N) {
       int zeroCount = 0;
       for(int i = 0; i < N; i++) {
           if(A[i] == 0) {
               zeroCount++;
           }
       }
       
       for(int i = 0; i < N; i++) {
           if(zeroCount > 0) {
               A[i] = 0;
               zeroCount--;
           }
           else {
               A[i] = 1;
           }
       }
    }
};
