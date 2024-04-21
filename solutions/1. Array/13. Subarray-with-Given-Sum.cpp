// ******** Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray. In case of multiple subarrays, return the subarray indexes which come first on moving from left to right ********
// Note --> You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

// <======== Example ========>
// Input: N = 5, S = 12, A[] = {1,2,3,7,5}
// Output: 2 4

// Input: N = 10, S = 15, A[] = {1,2,3,4,5,6,7,8,9,10}
// Output: 1 5


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s) {
        long long sum = 0;
        int start = 0;
        int end = 0;
        
        while(end < n) {
            sum += arr[end];
            while(sum > s && start < end) {
                sum -= arr[start];
                start++;
            }
            
            if(sum == s) {
                return {start+1, end+1};
            }
            end++;
        }
        
        return {-1};
    }
};