// ******** Given a string Str which may contains lowercase and uppercase chracters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string ********

// <======== Example ========>
// Input: Str = geeksforgeeks
// Output: geksfor

// Input: Str = HappyNewYear
// Output: HapyNewYr


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(N).




class Solution{
public:
	string removeDuplicates(string str) {
	    int n = str.length();
	    string ans = "";
	    set<char> st;
	    
	    for(int i = 0; i < n; i++) {
	        char element = str[i];
	        if(st.find(element) == st.end()) {
	            st.insert(element);
	            ans += element;
	        }
	    }
	    
	    return ans;
	}
};