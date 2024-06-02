// ******** Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase ********

// <======== Example ========>
// Input: geeksforgeeks, forgeeksgeeks
// Output: 1

// Input: mightandmagic, andmagicmigth
// Output: 0


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(N).




class Solution {
    public:
    bool areRotations(string s1,string s2) {
        if(s1.length() != s2.length()) {
            return false;
        }
        
        s1 = s1 + s1;
        if(s1.find(s2) != -1) {
            return true;
        }
        return false;
    }
};