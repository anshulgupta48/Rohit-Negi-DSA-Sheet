// ******** Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only ********

// <======== Example ========>
// Input: s = "Hello World"
// Output: 5

// Input: s = "   fly me   to   the moon  "
// Output: 4

// Input: s = "luffy is still joyboy"
// Output: 6




class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        string temp = "";
        bool isLastWord = false;

        for(int i = n-1; i >= 0; i--) {
            if(s[i] != ' ') {
                temp += s[i];
                isLastWord = true;
            }
            else {
                if(isLastWord == true) {
                    break;
                }
            }
        }

        return temp.length();
    }
};