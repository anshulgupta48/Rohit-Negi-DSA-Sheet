// ******** Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order ********

// <======== Example ========>
// Input: N = 5, arr[]= {0 2 1 2 0}
// Output: 0 0 1 2 2

// Input: N = 3, arr[] = {0 1 0}
// Output: 0 0 1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    void sort012(int a[], int n) {
        int start = 0;
        int mid = 0;
        int end = n-1;
        
        while(mid <= end) {
            if(a[mid] == 0) {
                swap(a[start], a[mid]);
                start++;
                mid++;
            }
            else if(a[mid] == 1) {
                mid++;
            }
            else {
                swap(a[mid], a[end]);
                end--;
            }
        }
    }
};