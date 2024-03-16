// ******** Given an array of distinct positive numbers, the task is to calculate the minimum number of subsets (or subsequences) from the array such that each subset contains consecutive numbers ********

// <======== Example ========>
// Input: N = 10, Arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103} 
// Output: 3

// Input: N = 3, Arr[] = {10, 100, 105}
// Output: 3


// Expected Time Complexity ==> O(N*log(N))
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int numofsubset(int arr[], int n) {
        int ans = 1;
        sort(arr, arr+n);
        
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1]-arr[i] != 1) {
                ans++;
            }
        }
        
        return ans;
    }
};