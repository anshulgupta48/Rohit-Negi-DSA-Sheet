// ******** Given a String S, reverse the string without reversing its individual words. Words are separated by dots ********

// <======== Example ========>
// Input: S = i.like.this.program.very.much
// Output: much.very.program.this.like.i

// Input: S = pqr.mno
// Output: mno.pqr


// Expected Time Complexity ==> O(|S|)
// Expected Auxiliary Space ==> O(|S|)




class Solution {
    public:
    string reverseWords(string S) { 
        stack<string> st;
        string temp = "", ans = "";
        
        for(int i = 0; i < S.size(); i++) {
            if(S[i] != '.') {
                temp += S[i];
            }
            else {
                st.push(temp);
                temp = "";
            }
        }
        
        st.push(temp);
        while(st.size() > 0) {
            if(st.size() > 1) {
                ans = ans + st.top() + ".";
                st.pop();
            }
            else {
                ans = ans + st.top();
                st.pop();
            }
        }
        
        return ans;
    } 
};