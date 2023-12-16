// ******** Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm. ********

// <======== Example ========>
// Input: N = 5, arr[] = {4 1 3 9 7}
// Output: 1 3 4 7 9

// Input: N = 10, arr[] = {10 9 8 7 6 5 4 3 2 1}
// Output: 1 2 3 4 5 6 7 8 9 10


// Expected Time Complexity ==> O(nlogn) 
// Expected Auxiliary Space ==> O(n)




class Solution {
public:
    void merge(int arr[], int l, int m, int r) {
         int n1 = m-l+1, n2 = r-m;
         int a[n1], b[n2];
         for(int i = 0; i < n1; i++) {
             a[i] = arr[l+i];
         }
         for(int i = 0; i < n2; i++) {
             b[i] = arr[m+i+1];
         }
         
         int i = 0, j = 0, k = l;
         while(i < n1 && j < n2) {
             if(a[i] <= b[j]) {
                 arr[k++] = a[i++];
             }
             else {
                 arr[k++] = b[j++];
             }
         }
         
         while(i < n1) {
             arr[k++] = a[i++];
         }
         while(j < n2) {
             arr[k++] = b[j++];
         }
    }
    
    
    void mergeSort(int arr[], int l, int r) {
        if(l >= r) {
            return;
        }
        
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};