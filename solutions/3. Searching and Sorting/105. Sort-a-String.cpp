// ******** Given a string consisting of lowercase letters, arrange all its letters in ascending order. ********

// <======== Example ========>
// Input: S = "edcab"
// Output: "abcde"

// Input: S = "xzy"
// Output: "xyz"


// Expected Time Complexity ==> O(|S| * log|S|)
// Expected Auxiliary Space ==> O(1)




string sort(string s){
    int n = s.size();
    int freq[26] = {0};
    
    for(int i = 0; i < n; i++) {
        char element = s[i]-'a';
        freq[element]++;
    }
    
    string ans = "";
    for(int i = 0; i < 26; i++) {
        while(freq[i] > 0) {
            freq[i]--;
            ans += (char)(i+int('a'));
        }
    }
    
    return ans;
}