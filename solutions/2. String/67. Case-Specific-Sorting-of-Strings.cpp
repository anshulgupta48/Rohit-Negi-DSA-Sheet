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
        vector<char>lowercase;
        vector<char>uppercase;
        
        for(int i = 0; i < n; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                lowercase.push_back(str[i]);
            }
            else {
                uppercase.push_back(str[i]);
            }
        }
        
        int i = 0;
        int j = 0;
        sort(lowercase.begin(), lowercase.end());
        sort(uppercase.begin(), uppercase.end());
        
        for(int k = 0; k < n; k++) {
            if(str[k] >= 'a' && str[k] <= 'z') {
                str[k] = lowercase[i++];
            }
            else {
                str[k] = uppercase[j++];
            }
        }
        
        return str;
    }
};