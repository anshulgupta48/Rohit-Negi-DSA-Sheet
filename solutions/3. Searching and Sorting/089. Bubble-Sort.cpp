// ******** Given an Integer N and a list arr. Sort the array using bubble sort algorithm. ********

// <======== Example ========>
// Input: N = 5, arr[] = {4, 1, 3, 9, 7}
// Output: 1 3 4 7 9

// Input: N = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10


// Expected Time Complexity ==> O(N^2)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    void bubbleSort(int arr[], int n) {
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }
};