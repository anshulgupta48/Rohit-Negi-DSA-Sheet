// ******** Given two strings consisting of lowercase english alphabets, the task is to check whether these strings are meta strings or not. Meta strings are the strings which can be made equal by exactly one swap in any of the strings. Equal string are not considered here as Meta strings ********

// <======== Example ========>
// Input: S1 = "geeks", S2 = "keegs"
// Output: 1

// Input: S1 = "geeks", S2 = "geeks"
// Output: 0


// Expected Time Complexity ==> O(|S|).
// Expected Auxiliary Space ==> O(1).




bool metaStrings (string S1, string S2) {
    if(S1 == S2 || S1.length() != S2.length()) {
        return false;
    }
    
    int n = S1.length();
    int i = 0;
    int j = n-1;
    
    while(S1[i] == S2[i]) {
        i++;
    }
    while(S1[j] == S2[j]) {
        j--;
    }
    
    swap(S1[i], S1[j]);
    if(S1 == S2) {
        return true;
    }
    
    return false;
}