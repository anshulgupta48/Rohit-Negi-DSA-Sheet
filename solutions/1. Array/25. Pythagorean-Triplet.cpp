// ******** Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false ********

// <======== Example ========>
// Input: N = 5, Arr[] = {3, 2, 4, 6, 5}
// Output: Yes

// Input: N = 3, Arr[] = {3, 8, 5}
// Output: No


// Expected Time Complexity ==> O(max(Arr[i])2)
// Expected Auxiliary Space ==> O(max(Arr[i]))




class Solution{
public:
	bool checkTriplet(int arr[], int n) {
	    for(int i = 0; i < n; i++) {
	        arr[i] = arr[i] * arr[i];
	    }
	    sort(arr, arr+n);
	    
	    for(int i = n-2; i > 0; i--) {
	        int start = 0;
	        int end = n-1;
	        
	        while(start < end) {
	            if(arr[start] + arr[end] == arr[i]) {
	                return true;
	            }
    	        else if(arr[start] + arr[end] < arr[i]) {
    	            start++;
    	        }
    	        else {
    	            end--;
    	        }
	        }
	    }
	    
	    return false;
	}
};