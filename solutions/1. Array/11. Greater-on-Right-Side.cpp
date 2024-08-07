// ******** You are given an array Arr of size N. Replace every element with the next greatest element (greatest element on its right side) in the array. Also, since there is no element next to the last element, replace it with -1 ********

// <======== Example ========>
// Input: N = 6, Arr[] = {16, 17, 4, 3, 5, 2}
// Output: 17 5 5 5 2 -1

// Input: N = 4, Arr[] = {2, 3, 1, 9}
// Output: 9 9 9 -1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:	
	vector<int> nextGreatest(vector<int> arr) {
	    int n = arr.size();
        int replace = -1;
        
        for(int i = n-1; i >= 0; i--) {
            int temp = replace;
            replace = max(replace, arr[i]);
            arr[i] = temp;
        }
        
        return arr;
	}
};