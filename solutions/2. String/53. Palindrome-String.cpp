// ******** Given a string S, check if it is palindrome or not ********

// <======== Example ========>
// Input: S = "abba"
// Output: 1 

// Input: S = "abc"
// Output: 0


// Expected Time Complexity ==> O(Length of S)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
	int isPalindrome(string S) {
	    int n = S.length();
        for(int i = 0; i < n/2; i++) {
            if(S[i] != S[n-i-1]) {
                return 0;
            }
        }
        
        return 1;
	}
};
