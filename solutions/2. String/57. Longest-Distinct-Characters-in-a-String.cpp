// ******** Given a string S, find the length of the longest substring with all distinct characters ********

// <======== Example ========>
// Input: S = "geeksforgeeks"
// Output: 7

// Input: S = "aaa"
// Output: 1


// Expected Time Complexity ==> O(|S|).
// Expected Auxiliary Space ==> O(K), where K is Constant.




int longestSubstrDistinctChars (string S) {
    map<char, int> mp;
    int ans = 0;
    int i = 0;
    
    while(i < S.length()) {
        if(mp.count(S[i]) == 0) {
            mp.insert({S[i], i});
            i++;
        }
        else {
            int temp = mp.size();
            ans = max(ans, temp);
            i = mp[S[i]] + 1;
            mp.clear();
        }
    }
    
    if(ans < mp.size()) {
        ans = mp.size();
    }
    
    return ans;
}