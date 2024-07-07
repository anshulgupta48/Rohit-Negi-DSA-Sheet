// ******** Given a string S, find the length of the longest substring with all distinct characters ********

// <======== Example ========>
// Input: S = "geeksforgeeks"
// Output: 7

// Input: S = "aaa"
// Output: 1


// Expected Time Complexity ==> O(|S|).
// Expected Auxiliary Space ==> O(K), where K is Constant.




int longestSubstrDistinctChars (string S) {
    int n = S.length();
    int count = 0;
    int i = 0;
    map<char, int> mp;
    
    while(i < n) {
        if(mp.count(S[i]) == 0) {
            mp.insert({S[i], i});
            i++;
        }
        else {
            int temp = mp.size();
            count = max(count, temp);
            i = mp[S[i]] + 1;
            mp.clear();
        }
    }
    
    if(count < mp.size()) {
        count = mp.size();
    }
    return count;
}