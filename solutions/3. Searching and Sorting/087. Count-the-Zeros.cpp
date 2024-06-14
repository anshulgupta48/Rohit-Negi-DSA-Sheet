// ******** Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's. ********

// <======== Example ========>
// Input: N = 12, Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3

// Input: N = 5, Arr[] = {0, 0, 0, 0, 0}
// Output: 5


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] == 1) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return (n-1-end);
    }
};