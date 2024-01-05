// ******** Given an array arr[] of size N, use Radix Sort Algorithm to sort arr[] in ascending order. ********

// <======== Example ========>
// Input: N = 5, arr[] = {1, 9, 345, 2}
// Output: 1 2 9 345

// Input: N = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10


// Expected Time Complexity ==> O(N * K)
// Expected Auxiliary Space ==> O(N + K)




int getMax(int arr[], int n) {
    int mx = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
        }
    }
    
    return mx;
}


void countSort(int arr[], int n, int exp) {
    int output[n];
    int i, count[10] = {0};
    
    for(i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }
    
    for(i = 1; i < 10; i++) {
        count[i] += count[i-1];
    }
    
    for(i = n-1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    
    for(i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}


void radixSort(int arr[], int n) { 
   int m = getMax(arr, n);
   for(int exp = 1; m/exp > 0; exp*=10) {
       countSort(arr, n, exp);
   }
} 