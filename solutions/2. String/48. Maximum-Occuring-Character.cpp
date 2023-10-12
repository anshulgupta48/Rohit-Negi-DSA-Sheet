// ******** Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character ********

// <======== Example ========>
// Input: str = testsample
// Output: e

// Input: str = output
// Output: t


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(Number of distinct characters).




class Solution {
    public:
    char getMaxOccuringChar(string str) {
        int n = str.size();
        int maxElement = 0;
        int ans = 0;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            int element = str[i];
            mp[element]++;
        }
        
        for(auto x: mp) {
            if(x.second > maxElement) {
                maxElement = x.second;
                ans = x.first;
            }
        }
        
        return ans;
    }
};