// ******** Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. Return 1, if there is at least one triplet following the condition else return 0. ********

// <======== Example ========>
// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1

// Input: n = 3, arr[] = {1, 2, 3}
// Output: 0


// Expected Time Complexity ==> O(n^2)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    bool findTriplets(int arr[], int n) { 
        sort(arr, arr+n);
        for(int i = 0; i < n; i++) {
            int start = i+1;
            int end = n-1;
            int sum = 0;
            
            while(start < end) {
                sum = arr[i] + arr[start] + arr[end];
                if(sum == 0) {
                    return true;
                }
                else if(sum < 0) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
        
        return false;
    }
};