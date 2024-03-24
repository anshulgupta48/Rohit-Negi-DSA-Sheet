// ******** Given a string of characters, find the length of the longest proper prefix which is also a proper suffix ********
// Note --> Prefix and suffix can be overlapping but they should not be equal to the entire string.

// <======== Example ========>
// Input: s = "abab"
// Output: 2 

// Input: s = "aaaa"
// Output: 3


// Expected Time Complexity ==> O(|s|)
// Expected Auxiliary Space ==> O(|s|)




class Solution{
  public:		
	int lps(string s) {
	    vector<int> ans(s.size(), 0);
	    int i = 1, j = 0;
	    
	    while(i < s.size()) {
	        if(s[i] == s[j]) {
	            ans[i] = j+1;
	            i++;
	            j++;
	        }
	        else {
	            if(j != 0) {
	                j = ans[j-1];
	            }
	            else {
	                i++;
	            }
	        }
	    }
	    
	    return ans.back();
	}
};
