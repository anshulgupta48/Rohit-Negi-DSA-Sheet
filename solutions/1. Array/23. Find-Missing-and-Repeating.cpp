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
        vector<int> ans(2);
        
        for(int i = 0; i < n; i++) {
            if(arr[abs(arr[i])-1] > 0) {
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            }
            else {
                ans[0] = abs(arr[i]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans[1] = i+1;
            }
        }
        
        return ans;
    }
};