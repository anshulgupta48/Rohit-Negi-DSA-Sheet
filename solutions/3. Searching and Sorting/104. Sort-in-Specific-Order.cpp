// ******** Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order. ********

// <======== Example ========>
// Input: N = 7, Arr = {1, 2, 3, 5, 4, 7, 10}
// Output: 7 5 3 1 2 4 10

// Input: N = 7, Arr = {0, 4, 5, 3, 7, 2, 1}
// Output: 7 5 3 1 0 2 4


// Expected Time Complexity ==> O(N*logN)
// Expected Auxiliary Space ==> O(N)




class Solution {
  public:
    void sortIt(long long arr[], long long n) {
        vector<int> temp;
        sort(arr, arr+n);
        
        for(int i = n-1; i >= 0; i--) {
            if(arr[i]%2 != 0) {
                temp.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i]%2 == 0) {
                temp.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};