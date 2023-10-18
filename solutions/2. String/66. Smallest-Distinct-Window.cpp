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
        set<char> s;
        for(char x: str) {
            s.insert(x);
        }
        
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int len = str.length();
        
        while(j < str.size()) {
            mp[str[j]]++;
            if(mp.size() == s.size()) {
                while(mp[str[i]] > 1) {
                    mp[str[i]]--;
                    i++;
                }
                
                len = min(len, j-i+1);
            }
            
            j++;
        }
        
        return len;
    }
};