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
        int count[256] = {0};
        int ans = 0;
        int left = 0, right = 0;
        
        while(right < n) {
            count[S[right]]++;
            while(count[S[right]] > 1) {
                count[S[left]]--;
                left++;
            }
            
            ans = max(ans, right-left+1);
            right++;
        }
        
        return ans;
    }
};