// ********  You are playing the Bulls and Cows game with your friend. You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess, you provide a hint with the following info: The number of "bulls", which are digits in the guess that are in the correct position. The number of "cows", which are digits in the guess that are in your secret number but are located in the wrong position.  Specifically, the non-bull digits in the guess that could be rearranged such that they become bulls. Given the secret number secret and your friend's guess guess, return the hint for your friend's guess. The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. Note that both secret and guess may contain duplicate digits. ********

// <======== Example ========>
// Input: secret = "1807", guess = "7810"
// Output: "1A3B"

// Input: secret = "1123", guess = "0111"
// Output: "1A1B"




string Solution::solve(string A, string B) {
    int n = A.length();
    string ans = "";
    int cow = 0;
    int bull = 0;
    map<char, int> mp;
    
    for(int i = 0; i < n; i++) {
        mp[A[i]]++;
    }
    
    for(int i = 0; i < n; i++) {
        if(A[i] == B[i]) {
            bull++;
            mp[A[i]]--;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i] && mp[B[i]]) {
            cow++;
            mp[B[i]]--;
        }
    }
    
    ans += to_string(bull) + 'A' + to_string(cow) + 'B';
    return ans;
}