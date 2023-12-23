// ******** The task is to complete the insert() function which is used to implement Insertion Sort. ********

// <======== Example ========>
// Input: N = 5, arr[] = { 4, 1, 3, 9, 7}
// Output: 1 3 4 7 9

// Input: N = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10


// Expected Time Complexity ==> O(N^2)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            int temp = arr[i];
            int j = i-1;

            for (; j >= 0; j--) {
                if (arr[j] > temp) {
                    arr[j+1] = arr[j];
                }
                else {
                    break;
                }
            }

            arr[j+1] = temp;
        }
    }
};