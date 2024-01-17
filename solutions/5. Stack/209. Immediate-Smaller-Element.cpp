// ******** Given an integer array Arr of size N. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. If next element is smaller, update the current index to that element. If not, then -1. ********

// <======== Example ========>
// Input: N = 5, Arr[] = {4, 2, 1, 5, 3}
// Output: 2 1 -1 3 -1

// Input: N = 6, Arr[] = {5, 6, 2, 3, 1, 7}
// Output: -1 2 -1 1 -1 -1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    stack<int> st;
	    st.push(arr[0]);
	    
	    for(int i = 1; i < n; i++) {
	        if(arr[i] < st.top()) {
	            arr[i-1] = arr[i];
	            st.pop();
	        }
	        else {
	            arr[i-1] = -1;
	        }
	        
	        st.push(arr[i]);
	    }
	    
	    arr[n-1] = -1;
	}
};