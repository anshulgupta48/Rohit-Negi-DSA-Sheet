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
	    int start = 0;
	    int end = S.length() - 1;
	    
	    while(start <= end) {
	        if(S[start] != S[end]) {
	            return 0;
	        }
	        
	        start++;
	        end--;
	    }
	    
	    return 1;
	}
};
