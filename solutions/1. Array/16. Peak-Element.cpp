// ******** An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists). Given an array arr[] of size N, Return the index of any one of its peak elements ********
// Note  --> The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

// <======== Example ========>
// Input: N = 3, arr[] = {1,2,3}
// Output: 2 

// Input: N = 3, arr[] = {3,4,2}
// Output: 1


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    int peakElement(int arr[], int n) {
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] < arr[mid+1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        
        return start;
    }
};
