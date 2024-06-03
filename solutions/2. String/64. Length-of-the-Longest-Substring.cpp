// ******** Given a string S, find the length of the longest substring without repeating characters ********

// <======== Example ========>
// Input: S = "geeksforgeeks"
// Output: 7

// Input: S = "abdefgabef"
// Output: 6


// Expected Time Complexity ==> O(|S|).
// Expected Auxiliary Space ==> O(K) where K is constant.




class Solution{
    public:
    int longestUniqueSubsttr(string S){
        int n = S.length();
        int ans = 0;
        int charFreq[256] = {0};
        
        int start = 0;
        int end = 0;
        while(end < n) {
            charFreq[S[end]]++;
            while(charFreq[S[end]] > 1) {
                charFreq[S[start]]--;
                start++;
            }
            
            ans = max(ans, end-start+1);
            end++;
        }
        
        return ans;
    }
};