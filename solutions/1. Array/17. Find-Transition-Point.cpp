// ******** Given a sorted array containing only 0s and 1s, find the transition point ********

// <======== Example ========>
// Input: N = 5, arr[] = {0,0,0,1,1}
// Output: 3 

// Input: N = 4, arr[] = {0,0,0,0}
// Output: -1


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




int transitionPoint(int arr[], int n) {
    int start = 0;
    int end = n-1;
        
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == 0) {
            start = mid + 1;
        }
        else {
            if(mid == 0 || mid > 0 && arr[mid-1] == 0) {
                return mid;
            }
            else {
                end = mid - 1;
            }
        }
    }
        
    return -1;
}
