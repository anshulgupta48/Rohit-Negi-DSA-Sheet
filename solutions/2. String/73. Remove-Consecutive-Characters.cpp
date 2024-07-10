// ******** Given a string A and integer B, remove all consecutive same characters that have length exactly B. All the consecutive same characters that have length exactly B will be removed simultaneously. ********

// <======== Example ========>
// Input: A = "aabcd", B = 2
// Output: "bcd"

// Input: A = "aabbccd", B = 2
// Output: "d"




string Solution::solve(string A, int B) {
    int n = A.length();
    string ans = "";
    
    for(int i = 0; i < A; i++) {
        int j = i;
        string temp = "";
        
        while(j < n && A[i] == A[j]) {
            temp += A[i];
            j++;
        }
        
        if(j-i != B) {
            ans += temp;
        }
        i = j-1;
    }
    
    return ans;
}