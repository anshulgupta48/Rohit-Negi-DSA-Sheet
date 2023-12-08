// ******** GIven two different arrays A and B of size N and M, the task is to merge the two arrays which are unsorted into another array which is sorted. ********

// <======== Example ========>
// Input: N = 3, M = 3, A[] = {10, 5, 15}, B[] = {20, 3, 2}
// Output: 2 3 5 10 15 20

// Input: N = 4, M = 3, A[] = {1, 10, 5, 15}, B[] = {20, 0, 2}
// Output: 0 1 2 5 10 15 20


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m) {
	    int i = 0, j = 0, k = 0; 
        while (i < n) { 
            res[k++] = a[i++];
        }
        
        while (j < m) { 
            res[k++] = b[j++];
        }
        sort(res, res+n+m); 
	}
};