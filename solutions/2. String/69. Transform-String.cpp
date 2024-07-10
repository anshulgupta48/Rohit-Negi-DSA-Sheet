// ******** Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A. ********

// <======== Example ========>
// Input: A = "abd", B = "bad"
// Output: 1

// Input: A = "GeeksForGeeks", B = "ForGeeksGeeks"
// Output: 3


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    int transform (string A, string B) {
        int n = A.length();
        int m = B.length();
        int count = 0;
        map<char, int> mp;
        
        if(n != m) {
            return -1;
        }
        
        for(int i = 0; i < n; i++) {
            mp[A[i]]++;
        }
        
        for(int i = 0; i < m; i++) {
            mp[B[i]]--;
        }
        
        for(auto x: mp) {
            if(x.second != 0) {
                return -1;
            }
        }
        
        int i = n-1;
        int j = m-1;
        while(i >= 0 && j >= 0) {
            while(i>=0 && A[i]!=B[j]) {
                count++;
                i--;
            }
            i--;
            j--;
        }
        
        return count;
    }
};