// ******** Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101” ********

// <======== Example ========>
// Input: N = 4, S = 1111
// Output: 6

// Input: N = 5, S = 01101
// Output: 3


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    long binarySubstring(int n, string a){
        int onesCount = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == '1') {
                onesCount++;
            }
        }
        
        long ans = onesCount*(onesCount-1) / 2;
        return ans;
    }
};