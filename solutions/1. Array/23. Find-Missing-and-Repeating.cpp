// ******** Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers ********

// <======== Example ========>
// Input: N = 2, Arr[] = {2, 2}
// Output: 2 1

// Input: N = 3, Arr[] = {1, 3, 3}
// Output: 3 2


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long m = n;
        long long totalSum = m*(m+1) / 2;
        long long sum = 0;
        long long squareTotalSum = (m*(m+1)*(2*m+1)) / 6;
        long long squareSum = 0;
        
        for(int i = 0; i < m; i++) {
            sum += arr[i];
            squareSum += (long long)arr[i] * (long long)arr[i];
        }
        
        long long val1 = sum - totalSum;
        long long val2 = squareSum - squareTotalSum;
        val2 = val2 / val1;
        
        long long x = (val1 + val2) / 2;
        long long y = x - val1;
        
        return {(int)x, (int)y};
    }
};