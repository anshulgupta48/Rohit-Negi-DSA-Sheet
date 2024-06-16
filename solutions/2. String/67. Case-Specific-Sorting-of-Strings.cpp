// ******** Given a string S consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa ********

// <======== Example ========>
// Input: N = 12, S = defRTSersUXI
// Output: deeIRSfrsTUX

// Input: N = 6, S = srbDKi
// Output: birDKs


// Expected Time Complexity ==> O(Nlog(N)).
// Expected Auxiliary Space ==> O(N).




class Solution {
    public:
    string caseSort(string str, int n) {
        string lowerCase = "";
        string upperCase = "";
        
        for(int i = 0; i < n; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                lowerCase += str[i];
            }
            else {
                upperCase += str[i];
            }
        }
        
        sort(lowerCase.begin(), lowerCase.end());
        sort(upperCase.begin(), upperCase.end());
        int i = 0;
        int j = 0;
        
        for(int k = 0; k < n; k++) {
            if(str[k] >= 'a' && str[k] <= 'z') {
                str[k] = lowerCase[i++];
            }
            else {
                str[k] = upperCase[j++];
            }
        }
        
        return str;
    }
};