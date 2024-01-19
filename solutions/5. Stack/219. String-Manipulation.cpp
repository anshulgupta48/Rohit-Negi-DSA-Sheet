// ******** Tom is a string freak. He has got sequences of  n words to manipulate. If in a sequence, two same words come together then hell destroy each other. He wants to know the number of words left in the sequence after this pairwise destruction. ********

// <======== Example ========>
// Input: 5, v[] = {"ab", "aa", "aa", "bcd", "ab"}
// Output: 3

// Input: 4, v[] = {"tom", "jerry", "jerry", "tom"}
// Output: 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) {
        stack<string> ans;
        for(int i = 0; i < v.size(); i++) {
            if(ans.empty()) {
                ans.push(v[i]);
            }
            else if(ans.top() == v[i]) {
                ans.pop();
            }
            else {
                ans.push(v[i]);
            }
        }
        
        return ans.size();
    } 
};