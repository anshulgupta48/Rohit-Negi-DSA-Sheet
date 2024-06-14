// ******** Given an unsorted array of size N, use selection sort to sort arr[] in increasing order. ********

// <======== Example ========>
// Input: N = 5, arr[] = {4, 1, 3, 9, 7}
// Output: 1 3 4 7 9

// Input: N = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10


// Expected Time Complexity ==> O(N^2)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    void selectionSort(int arr[], int n) {
       for(int i = 0; i < n; i++) {
            int minIndex = i;
            for(int j = i+1; j < n; j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            
            swap(arr[i], arr[minIndex]);
        }
    }
};