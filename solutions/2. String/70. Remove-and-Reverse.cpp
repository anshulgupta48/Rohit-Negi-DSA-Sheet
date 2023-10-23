// ******** Given a string S which consists of only lowercase English alphabets, you have to perform the below operations: If the string S contains any repeating character, remove the first repeating character and reverse the string and again perform the above operation on the modified string, otherwise, you stop. You have to find the final string ********

// <======== Example ========>
// Input: S = "abab"
// Output: ba

// Input: S = "dddd"
// Output: d


// Expected Time Complexity ==> O(|S|)
// Expected Auxiliary Space ==> O(K), K <= 26.




class Solution {
  public:
    string removeReverse(string S) {
        int n = S.size();
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++) {
            mp[S[i]]++;
        }
        
        int left = 0, right = n-1;
        int dir = 0;
        while(left <= right) {
            if(dir == 0) {
                if(mp[S[left]] == 1) {
                    left++;
                }
                else {
                    mp[S[left]]--;
                    S[left] = '#';
                    left++;
                    dir = 1;
                }
            }
            else {
                if(mp[S[right]] == 1) {
                    right--;
                }
                else {
                    mp[S[right]]--;
                    S[right] = '#';
                    right--;
                    dir = 0;
                }
            }
        }
        
        string ans = "";
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