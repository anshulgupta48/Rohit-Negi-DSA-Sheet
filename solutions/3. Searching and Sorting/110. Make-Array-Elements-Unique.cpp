// ******** Given an array arr[ ] of N elements, your task is to find the minimum number of increment operations required to make all the elements of the array unique. ie- no value in the array should occur more than once. In an operation a value can be incremented by 1 only. ********

// <======== Example ========>
// Input: N = 3, arr[] = {1, 2, 2}
// Output: 1

// Input: N = 4, arr[] = {1, 1, 2, 3}
// Output: 3


// Expected Time Complexity ==> O(N*log(N))
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        sort(arr.begin(), arr.end());
        long long count = 0;
        
        for(long long i = 1; i < N; i++) {
            if(arr[i] <= arr[i-1]) {
                long long val = arr[i-1] - arr[i] + 1;
                count += val;
                arr[i] += val;
            }
        }
        
        return count;
    }
};