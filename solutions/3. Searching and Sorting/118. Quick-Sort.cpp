// ******** Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot. Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array). ********

// <======== Example ========>
// Input: N = 5, arr[] = {4 1 3 9 7}
// Output: 1 3 4 7 9

// Input: N = 9, arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
// Output: 1 1 2 3 4 6 7 9 10


// Expected Time Complexity ==> O(N*logN)
// Expected Auxiliary Space ==> O(logN)




class Solution {
public:
    int partition(int arr[], int low, int high) {
        int pivot = arr[low];
        int count = 0;
        for(int i = low+1; i <= high; i++) {
            if(arr[i] <= pivot) {
                count++;
            }
        }
        
        int pIndex = low + count;
        swap(arr[low], arr[pIndex]);
        
        int i = 0, j = high;
        while(i < pIndex && j > pIndex) {
            while(arr[i] <= pivot) {
                i++;
            }
            while(arr[j] > pivot) {
                j--;
            }
            
            if(i < pIndex && j > pIndex) {
                swap(arr[i++], arr[j--]);
            }
        }
        
        return pIndex;
    }
    
    
    void quickSort (int arr[], int low, int high) {
       if(low >= high) {
           return;
       }
       
       int p = partition(arr, low, high);
       quickSort(arr, low, p-1);
       quickSort(arr, p+1, high);
    }
};