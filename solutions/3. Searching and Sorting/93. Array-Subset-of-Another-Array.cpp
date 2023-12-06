// ******** Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. There can be duplicate elements. ********

// <======== Example ========>
// Input: a1[] = {11, 7, 1, 13, 21, 3, 7, 3}, a2[] = {11, 3, 7, 1, 7}
// Output: Yes

// Input: a1[] = {1, 2, 3, 4, 4, 5, 6}, a2[] = {1, 2, 4}
// Output: Yes

// Input: a1[] = {10, 5, 2, 23, 19}, a2[] = {19, 5, 3}
// Output: No


// Expected Time Complexity ==> O(max(n,m))
// Expected Auxiliary Space ==> O(n)




string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int element = a1[i];
        mp[element]++;
    }
    
    for(int i = 0; i < m; i++) {
        int element = a2[i];
        if(mp[element] == 0) {
            return "No";
        }
        else {
            mp[element]--;
        }
    }
    
    return "Yes";
}