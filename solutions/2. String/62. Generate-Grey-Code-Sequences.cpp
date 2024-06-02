// ******** Given a number N, your task is to complete the function which generates all n-bit grey code sequences, a grey code sequence is a sequence such that successive patterns in it differ by one bit ********

// <======== Example ========>
// Input: N = 2
// Output: 00 01 11 10

// Input: N = 1
// Output: 0 1


// Expected Time Complexity ==> O(N * 2^N).
// Expected Auxiliary Space ==> O(1).




class Solution{
  public:
    vector <string> generateCode(int N) {
        vector<string> ans;
        if(N == 1) {
            ans.push_back("0");
            ans.push_back("1");
            return ans;
        }
        
        vector<string> temp = generateCode(N-1);
        for(int i = 0; i < temp.size(); i++) {
            ans.push_back("0" + temp[i]);
        }
        for(int i = temp.size()-1; i >= 0; i--) {
            ans.push_back("1" + temp[i]);
        }
        
        return ans;
    }
};