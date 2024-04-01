// ******** Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum ********

// <======== Example ========>
// Input: N = 7, arr[] = {8,-8,9,-9,10,-11,12}
// Output: 22 

// Input: N = 8, arr[] = {10,-3,-4,7,6,5,-4,-1}
// Output: 23


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution{
    public:
    int kadane(int arr[], int n) {
        int ans = INT_MIN;
        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += arr[i];
            ans = max(ans, totalSum);
            
            if(totalSum < 0) {
                totalSum = 0;
            }
        }
        
        return ans;
    }
    
    
    int circularSubarraySum(int arr[], int num){
        int k1 = kadane(arr, num);
        if(k1 < 0) {
            return k1;
        }
        
        int k2 = 0;
        for(int i = 0; i < num; i++) {
            k2 += arr[i];
            arr[i] = arr[i]*(-1);
        }
        
        k2 = k2 + kadane(arr, num);
        return max(k2, k1);
    }
};
