// ******** Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers ********
// Note  --> Array should start with a positive number and 0 (zero) should be considered a positive element.

// <======== Example ========>
// Input: N = 9, Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
// Output: 9 -2 4 -1 5 -5 0 -3 2

// Input: N = 10, Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// Output: 5 -5 2 -2 4 -8 7 1 8 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
public:
	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
	    
	    for(int i = 0; i < n; i++) {
	        if(arr[i] >= 0) {
	            pos.push_back(arr[i]);
	        }
	        else {
	            neg.push_back(arr[i]);
	        }
	    }
	    
	    int i = 0;
	    int j = 0;
	    int k = 0;
	    
	    while(i < pos.size() && j < neg.size()) {
	        arr[k++] = pos[i++];
	        arr[k++] = neg[j++];
	    }
	    
	    while(i < pos.size()) {
	        arr[k++] = pos[i++];
	    }
	    
	    while(j < neg.size()) {
	        arr[k++] = neg[j++];
	    }
	}
};