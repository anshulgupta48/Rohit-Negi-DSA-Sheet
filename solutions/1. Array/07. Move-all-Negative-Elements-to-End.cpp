// ******** Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element ********

// <======== Example ========>
// Input: N = 8, arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output: 1 3 2 11 6 -1 -7 -5

// Input: N = 8, arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
// Output: 7, 9, 10, 11, -5, -3, -4, -1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
    public:
    void segregateElements(vector<int> &arr) {
        int n = arr.size();
        int i = 0;
        int temp[n];
        
        for(int j = 0; j < n; j++) {
            if(arr[j] >= 0) {
                temp[i++] = arr[j];
            }
        }
        
        for(int j = 0; j < n; j++) {
            if(arr[j] < 0) {
                temp[i++] = arr[j];
            }
        }
        
        for(int j = 0; j < n; j++) {
            arr[j] = temp[j];
        }
    }
};