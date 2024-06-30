// ******** Given an integer array and another integer element. The task is to find if the given element is present in array or not ********

// <======== Example ========>
// Input: n = 4, arr[] = {1,2,3,4}, x = 3
// Output: 2

// Input: n = 5, arr[] = {1,2,3,4,5}, x = 5
// Output: 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int search(int arr[], int n, int x) {
        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                return i;
            }
        }
        
        return -1;
    }
};