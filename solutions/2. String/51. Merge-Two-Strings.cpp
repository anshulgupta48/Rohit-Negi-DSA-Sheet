// ******** Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end ********
// NOTE --> Add the whole string if other string is empty.

// <======== Example ========>
// Input: S1 = "Hello", S2 = "Bye"
// Output: HBeylelo

// Input: S1 = "abc", S2 = "def"
// Output: adbecf


// Expected Time Complexity ==> O(|S1| + |S2|).
// Expected Auxiliary Space ==> O(1).




string merge (string S1, string S2) {
    int n = S1.length();
    int m = S2.length();
    
    string ans = "";
    int i = 0;
    int j = 0;
    
    while(i < n && j < m) {
        ans += S1[i++];
        ans += S2[j++];
    }
    
    while(i < n) {
        ans += S1[i++];
    }
    
    while(j < m) {
        ans += S2[j++];
    }
    
    return ans;
}