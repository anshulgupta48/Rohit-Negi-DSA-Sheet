// ******** Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below. I ==> 1, V ==> 5, X ==> 10, L ==> 50, C ==> 100, D ==> 500, M ==> 1000 ********

// <======== Example ========>
// Input: s = V
// Output: 5

// Input: s = III
// Output: 3


// Expected Time Complexity ==> O(|S|), |S| = length of string S.
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int val(char ch) {
        if(ch == 'I') {
            return 1;
        }
        else if(ch == 'V') {
            return 5;
        }
        else if(ch == 'X') {
            return 10;
        }
        else if(ch == 'L') {
            return 50;
        }
        else if(ch == 'C') {
            return 100;
        }
        else if(ch == 'D') {
            return 500;
        }
        else if(ch == 'M') {
            return 1000;
        }
        else {
            return -1;
        }
    }
    
    
    int romanToDecimal(string &str) {
        int n = str.size();
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            int s1 = val(str[i]);
            if(i+1 < n) {
                int s2 = val(str[i+1]);
                if(s1 >= s2) {
                    ans += s1;
                }
                else {
                    ans += (s2-s1);
                    i++;
                }
            }
            else {
                ans += s1;
            }
        }
        
        return ans;
    }
};