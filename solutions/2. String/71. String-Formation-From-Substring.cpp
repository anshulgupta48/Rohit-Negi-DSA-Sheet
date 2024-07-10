// ******** Given a string s, the task is to check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. ********

// <======== Example ========>
// Input: s = "ababab"
// Output: 1

// Input: s = "ababac"
// Output: 0


// Expected Time Complexity ==> O(|s|)
// Expected Auxiliary Space ==> O(|s|)




class Solution{
public:
	int isRepeat(string s) {
	    int n = s.length();
	    vector<int> temp(n, 0);
	    int i = 0;
	    int j = 1;
	    
	    while(j < n) {
	        if(s[i] == s[j]) {
	            temp[j] = i+1;
	            i++;
	            j++;
	        }
	        else {
	            if(i == 0) {
	                temp[j] = 0;
	                j++;
	            }
	            else {
	                i = temp[i-1];
	            }
	        }
	    }
	    
	    if(temp[n-1] == 0) {
	        return 0;
	    }
	    return (n%(n-temp[n-1]) == 0);
	}
};