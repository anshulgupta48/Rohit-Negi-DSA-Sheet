// ******** Given a string S, the task is to find the bracket numbers. ********

// <======== Example ========>
// Input: S = "(aa(bdc))p(dee)"
// Output: 1 2 2 1 3 3

// Input: S = "(((()("
// Output: 1 2 3 4 4 5


// Expected Time Complexity ==> O(|S|)
// Expected Auxiliary Space ==> O(|S|)




class Solution{
public:
	vector<int> bracketNumbers(string S) {
	    vector<int> ans;
	    stack<int> s;
	    int count = 0;
	    
	    for(int i = 0; i < S.length(); i++) {
	        if(S[i] == '(') {
	            count++;
	            s.push(count);
	            ans.push_back(count);
	        }
	        else if(S[i] == ')') {
	            ans.push_back(s.top());
	            s.pop();
	        }
	    }
	    
	    return ans;
	}
};