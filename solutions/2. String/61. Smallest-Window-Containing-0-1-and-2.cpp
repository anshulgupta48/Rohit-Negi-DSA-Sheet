// ******** Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1 ********

// <======== Example ========>
// Input: S = "01212"
// Output: 3

// Input: S = "12121"
// Output: -1


// Expected Time Complexity ==> O(|S|).
// Expected Auxiliary Space ==> O(1).




class Solution {
  public:
    int smallestSubstring(string S) {
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int len = INT_MAX;
        
        while(j < S.size()) {
            mp[S[j]]++;
            while(mp.size() == 3) {
                len = min(len, j-i+1);
                mp[S[i]]--;
                
                if(mp[S[i]] == 0) {
                    mp.erase(S[i]);
                }
                
                i++;
            }
            
            j++;
        }
        
        int ans = (len == INT_MAX) ? -1 : len;
        return ans;
    }
};