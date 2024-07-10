// ******** Given a string S which consists of only lowercase English alphabets, you have to perform the below operations: If the string S contains any repeating character, remove the first repeating character and reverse the string and again perform the above operation on the modified string, otherwise, you stop. You have to find the final string. ********

// <======== Example ========>
// Input: S = "abab"
// Output: ba

// Input: S = "dddd"
// Output: d


// Expected Time Complexity ==> O(|S|)
// Expected Auxiliary Space ==> O(K)




class Solution {
  public:
    string removeReverse(string S) {
        int n = S.length();
        string ans = "";
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[S[i]]++;
        }
        
        int start = 0;
        int end = n-1;
        int dir = 0;
        
        while(start <= end) {
            if(dir == 0) {
                if(mp[S[start]] == 1) {
                    start++;
                }
                else {
                    mp[S[start]]--;
                    S[start] = '#';
                    start++;
                    dir = 1;
                }
            }
            else {
                if(mp[S[end]] == 1) {
                    right--;
                }
                else {
                    mp[S[end]]--;
                    S[end] = '#';
                    end--;
                    dir = 0;
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(S[i] != '#') {
                ans.push_back(S[i]);
            }
        }
        
        if(dir == 1) {
            reverse(ans.begin(), ans.end());
        }
        
        return ans;
    }
};