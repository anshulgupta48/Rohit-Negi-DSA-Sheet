// ******** Given an array A of n positive numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is a position such that the sum of elements before it is equal to the sum of elements after it ********
// Note  --> Return equilibrium point in 1-based indexing. Return -1 if no such point exists.

// <======== Example ========>
// Input: n = 5 , A[] = {1,3,5,2,2} 
// Output: 3

// Input: n = 1, A[] = {1}
// Output: 1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int equilibriumPoint(vector<long long> &arr) {
        int n = arr.size();
        int totalSum = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            totalSum -= arr[i];
            if(sum == totalSum) {
                return i+1;
            }
            sum += arr[i];
        }
        
        return -1;
    }
};