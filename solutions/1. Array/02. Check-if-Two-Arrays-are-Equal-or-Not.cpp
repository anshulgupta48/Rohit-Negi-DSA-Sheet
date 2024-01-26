// ******** Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though ********
// Note --> If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

// <======== Example ========>
// Input: N = 5, A[] = {1,2,5,4,0}, B[] = {2,4,5,0,1}
// Output: 1

// Input: N = 3, A[] = {1,2,5}, B[] = {2,4,15}
// Output: 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
    public:
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        for(int i = 0; i < N; i++) {
            if(A[i] != B[i]) {
                return false;
            }
        }
        
        return true;
    }
};