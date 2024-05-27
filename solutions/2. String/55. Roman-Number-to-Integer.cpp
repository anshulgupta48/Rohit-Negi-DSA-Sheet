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
    int charVal(char ch) {
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
    }
  
  
    int romanToDecimal(string &str) {
        int n = str.length();
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            int val1 = charVal(str[i]);
            if(i+1 < n) {
                int val2 = charVal(str[i+1]);
                if(val1 < val2) {
                    ans = ans + (val2 - val1);
                    i++;
                }
                else {
                    ans = ans + val1;
                }
            }
            else {
                ans = ans + val1;
            }
        }
        
        return ans;
    }
};