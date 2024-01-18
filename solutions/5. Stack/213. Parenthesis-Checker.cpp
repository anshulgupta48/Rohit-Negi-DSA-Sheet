// ******** Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp. For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]). ********
// Note --> The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

// <======== Example ========>
// Input: {([])}
// Output: true

// Input: ()
// Output: true

// Input: ([]
// Output: false


// Expected Time Complexity ==> O(|x|)
// Expected Auxiliary Space ==> O(|x|)




class Solution {
    public:
    bool isMatching(char a, char b) {
        return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
    }
    
    
    bool ispar(string x) {
        stack<char> st;
        for(int i = 0; i < x.length(); i++) {
            if(x[i]=='(' || x[i]=='[' || x[i]=='{') {
                st.push(x[i]);
            }
            else {
                if(st.empty()) {
                    return false;
                }
                else if(isMatching(st.top(), x[i]) == false) {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }
        
        if(st.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};