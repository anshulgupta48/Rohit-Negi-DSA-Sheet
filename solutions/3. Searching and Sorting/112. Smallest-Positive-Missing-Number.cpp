// ******** You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array. ********
// Note --> Positive number starts from 1.

// <======== Example ========>
// Input: N = 5, arr[] = {1,2,3,4,5}
// Output: 6

// Input: N = 5, arr[] = {0,-10,1,3,-20}
// Output: 2


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    int missingNumber(int arr[], int n) { 
        int temp = 1;
        sort(arr, arr+n);
        
        for(int i = 0; i < n; i++) {
            if(arr[i] < 1) {
                continue;
            }
            else if(arr[i] == temp) {
                temp++;
            }
        }
        
        return temp;
    } 
};