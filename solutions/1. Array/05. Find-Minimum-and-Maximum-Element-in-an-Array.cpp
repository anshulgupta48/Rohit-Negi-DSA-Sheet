// ******** Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array ********

// <======== Example ========>
// Input: N = 6, A[] = {3, 2, 1, 56, 10000, 167}
// Output: 1 10000

// Input: N = 5, A[]  = {1, 345, 234, 21, 56789}
// Output: 1 56789


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




pair<long long, long long> getMinMax(long long a[], int n) {
    long long minElement = INT_MAX;
    long long maxElement = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(a[i] < minElement) {
            minElement = a[i];
        }
        if(a[i] > maxElement) {
            maxElement = a[i];
        }
    }
    
    return {minElement, maxElement};
}