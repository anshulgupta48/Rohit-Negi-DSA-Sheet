// ******** Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it. ********

// <======== Example ========>
// Input: S = 00001
// Output: 4

// Input: S = 0
// Output: -1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int lastIndex(string s) {
        int n = s.size();
        
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == '1') {
                return i;
            }
        }
        
        return -1;
    }
};