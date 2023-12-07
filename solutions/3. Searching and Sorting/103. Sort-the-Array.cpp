// ******** Given a random set of numbers, Print them in sorted order. ********

// <======== Example ========>
// Input: N = 4, arr[] = {1, 5, 3, 2}
// Output: {1, 2, 3, 5}

// Input: N = 2, arr[] = {3, 1}
// Output: {1, 3}


// Expected Time Complexity ==> O(N*logN)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> sortArr(vector<int>arr, int n){
        sort(arr.begin(), arr.end());
        return arr;
    }
};