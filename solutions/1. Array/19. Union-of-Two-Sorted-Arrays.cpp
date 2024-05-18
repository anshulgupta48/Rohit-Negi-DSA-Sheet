// ******** Union of two arrays can be defined as the common and distinct elements in the two arrays. Given two sorted arrays of size n and m respectively, find their union ********

// <======== Example ========>
// Input: n = 5, arr1[] = {1, 2, 3, 4, 5}, m = 3, arr2 [] = {1, 2, 3}
// Output: 1 2 3 4 5

// Input: n = 5, arr1[] = {2, 2, 3, 4, 5}, m = 5, arr2[] = {1, 1, 2, 3, 4}
// Output: 1 2 3 4 5

// Input: n = 5, arr1[] = {1, 1, 1, 1, 1}, m = 5, arr2[] = {2, 2, 2, 2, 2}
// Output: 1 2


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        int i = 0;
        int j = 0;
        vector<int> ans;
        
        while(i < n && j < m) {
            if(arr1[i] < arr2[j]) {
                if(ans.size() == 0 || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
            }
            else {
                if(ans.size() == 0 || ans.back() != arr2[j]) {
                    ans.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(i < n) {
            if(ans.size() == 0 || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        
        while(j < m) {
            if(ans.size() == 0 || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }
        
        return ans;
    }
};