// ******** Given an array arr[] containing positive elements. A and B are two numbers defining a range. The task is to check if the array contains all elements in the given range. ********

// <======== Example ========>
// Input: N = 7, A = 2, B = 5, arr[] =  {1, 4, 5, 2, 7, 8, 3}
// Output: Yes

// Input: N = 7, A = 2, B = 6, arr[] = {1, 4, 5, 2, 7, 8, 3}
// Output: No


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
	bool check_elements(int arr[], int n, int A, int B) {
		sort(arr, arr+n);
		for(int i = 0; i < n; i++) {
		    if(arr[i] == A) {
		        A++;
		    }
		}
		
		if(A > B) {
		    return true;
		}
		return false;
	}
};