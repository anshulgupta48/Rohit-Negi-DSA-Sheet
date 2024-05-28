// ******** Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time. For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be dbca ********

// <======== Example ========>
// Input: "AABBBCBBAC"
// Output: 3

// Input: "aaab"
// Output: 2

// Input: "GEEKSGEEKSFOR"
// Output: 8


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int findSubString(string str) {
        int n = str.length();
        int ans = INT_MAX;
        set<char> st;
        unordered_map<char, int> mp;
    
        for(auto x: str) {
            st.insert(x);
        }
        
        int i = 0, j = 0;
        while(j < n) {
            mp[str[j]]++;
            if(mp.size() == st.size()) {
                while(mp[str[i]] > 1) {
                    mp[str[i]]--;
                    i++;
                }
                ans = min(ans, j-i+1);
            }
            
            j++;
        }
        
        return ans;
    }
};