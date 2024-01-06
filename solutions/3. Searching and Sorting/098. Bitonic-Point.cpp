// ******** Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array. If the array is increasing then just print the last element will be the maximum value. ********

// <======== Example ========>
// Input: n = 9, arr[] = {1,15,25,45,42,21,17,12,11}
// Output: 45

// Input: n = 5, arr[] = {1, 45, 47, 50, 5}
// Output: 50


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	int findMaximum(int arr[], int n) {
	    int start = 0;
	    int end = n-1;
	    
	    while(start < end) {
	        int mid = start + (end - start) / 2;
	        if(arr[mid] > arr[end] && arr[mid] > arr[mid+1]) {
	            end = mid;
	        }
	        else {
	            start = mid + 1;
	        }
	    }
	    
	    return arr[start];
	}
};