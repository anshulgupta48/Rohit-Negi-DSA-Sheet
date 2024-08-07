// ******** Given an array, rotate the array by one position in clock-wise direction ********

// <======== Example ========>
// Input: N = 5, A[] = {1, 2, 3, 4, 5}
// Output: 5 1 2 3 4

// Input: N = 8, A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output: 3 9 8 7 6 4 2 1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




void rotate(vector<int> &arr) {
    int n = arr.size();
    int temp = arr[n-1];
        
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}