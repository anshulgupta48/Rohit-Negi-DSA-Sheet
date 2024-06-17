// ******** Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not. ********

// <======== Example ========>
// Input: N = 5, K = 6, arr[] = {1,2,3,4,6}
// Output: 1

// Input: N = 5, K = 2, arr[] = {1,3,4,5,6}
// Output: -1


// Expected Time Complexity ==> O(Log N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) {
        int start = 0;
        int end = N-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] == K) {
                return 1;
            }
            else if(arr[mid] < K) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return -1;
    }
};