// ******** You are given a string s. You need to reverse the string ********

// <======== Example ========>
// Input: s = Geeks
// Output: skeeG

// Input: s = for
// Output: rof


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    string reverseWord(string str) {
        int n = str.size();
        for(int i = 0; i < n/2; i++) {
            swap(str[i], str[n-i-1]);
        }
        
        return str;
    }
};