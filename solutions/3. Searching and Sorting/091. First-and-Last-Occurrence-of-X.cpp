// ******** Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array. If the number X is not found in the array, return '-1' as an array. ********

// <======== Example ========>
// Input: N = 4 , X = 3, arr[] = { 1, 3, 3, 4 }
// Output: 1 2

// Input: N = 4, X = 5, arr[] = { 1, 2, 3, 4 }
// Output: -1


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int> ans;
        int a = -1;
        int b = -1;
        
        int start = 0;
        int end = n-1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] == x) {
                a = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        start = 0;
        end = n-1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] == x) {
                b = mid;
                start = mid + 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        if(a < 0 && b < 0) {
            ans.push_back(-1);
        }
        else {
            ans.push_back(a);
            ans.push_back(b);
        }
        
        return ans;
    }
};