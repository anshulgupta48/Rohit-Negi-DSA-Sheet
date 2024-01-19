// ******** Given an array Arr, with indexes running from 0 to N, select any two indexes, i and j such that i<=j-1. From subarray Arr[i...j], find the two smallest numbers and add them, you will get score for that subarray. Your task is to return maximum score possible in the given array Arr. ********

// <======== Example ========>
// Input: arr[] = [4, 3, 1, 5, 6]
// Output: 11

// Input: arr[] = {5, 4, 3, 1, 6}
// Output: 9


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    long long pairWithMaxSum(long long arr[], long long N) {
        long long maxSum = INT_MIN;
        for(int i = 1; i < N; i++) {
            maxSum = max(maxSum, arr[i] + arr[i-1]);
        }
        
        return maxSum;
    }
};