// ******** Given two strings S1 and S2 in lowercase, the task is to make them anagram. The only allowed operation is to remove a character from any string. Find the minimum number of characters to be deleted to make both the strings anagram. Two strings are called anagram of each other if one of them can be converted into another by rearranging its letters ********

// <======== Example ========>
// Input: S1 = bcadeh, S2 = hea
// Output: 3

// Input: S1 = cddgk, S2 = gcd
// Output: 2


// Expected Time Complexity ==> O(max(|S1|, |S2|)), where |S| = length of string S.
// Expected Auxiliary Space ==> O(26).




int remAnagram(string str1, string str2) {
    map<char, int> mp;
    int ans = 0;
    
    for(int i = 0; i < str1.length(); i++) {
        int element = str1[i];
        mp[element]++;
    }
    
    for(int i = 0; i < str2.length(); i++) {
        int element = str2[i];
        mp[element]--;
    }
    
    for(auto x: mp) {
        ans += abs(x.second);
    }
    
    return ans;
}