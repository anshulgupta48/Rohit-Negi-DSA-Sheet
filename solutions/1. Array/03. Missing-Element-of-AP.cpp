// ******** Find the missing element from an ordered array arr[], consisting of N elements representing an Arithmetic Progression(AP) ********
// Note --> There always exists an element which upon inserting into sequence forms Arithmetic progression. Boundary elements (first and last elements) are not missing.

// <======== Example ========>
// Input: N = 6, Arr[] = {2, 4, 8, 10, 12, 14}
// Output: 6

// Input: N = 6, Arr[] = {1, 6, 11, 16, 21, 31}
// Output: 26


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




class Solution{   
public:
    int findMissing(int arr[]) {
        int n = arr.size();
        int d = (arr[n-1] - arr[0]) / n;
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid+1]-arr[mid] != d) {
                return arr[mid]+d;
            }
            else if(arr[mid]-arr[mid-1] != d) {
                return arr[mid]-d;
            }
            else if(arr[mid] == arr[0] + mid*d) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return -1;
    }
};