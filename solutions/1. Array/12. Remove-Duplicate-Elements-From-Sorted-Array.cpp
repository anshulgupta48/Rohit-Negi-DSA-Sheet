// ******** Given a sorted array A[] of size N, delete all the duplicated elements from A[]. Modify the array such that if there are X distinct elements in it then the first X positions of the array should be filled with them in increasing order and return the number of distinct elements in the array ********

// <======== Example ========>
// Input: N = 5, Array = {2, 2, 2, 2, 2}
// Output: 2

// Input: N = 4, Array = {1, 2, 2, 4}
// Output: 1 2 4


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i = 0;
        
        for(int j = 0; j < n-1; j++) {
            if(a[j] != a[j+1]) {
                a[i++] = a[j];
            }
        }
        
        a[i++] = a[n-1];
        return i;
    }
};