// ******** Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet. For N =1 we have column A, for 27 we have AA and so on ********
// Note --> The alphabets are all in uppercase. 

// <======== Example ========>
// Input: N = 51
// Output: AY


// Expected Time Complexity ==> O(Log(N))
// Expected Auxiliary Space ==> O(Log(N))




class Solution{
    public:
    string ExcelColumn(int N) {
        string ans;
        while(N > 0) {
            N--;
            int currValue = N % 26;
            N = N / 26;
            ans.push_back(currValue + 'A');
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};