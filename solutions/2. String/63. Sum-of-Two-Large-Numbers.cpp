// ******** Given two strings denoting non-negative numbers X and Y. Calculate the sum of X and Y ********

// <======== Example ========>
// Input: X = "25", Y = "23"
// Output: 48

// Input: X = "2500", Y = "23"
// Output: 2523


// Expected Time Complexity ==> O(|X| + |Y|)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    string findSum(string X, string Y) {
        reverse(X.begin(), X.end());
        reverse(Y.begin(), Y.end());
        if(X.size() < Y.size()) {
            swap(X, Y);
        }
        
        int carry;
        int n = X.size(), m = Y.size();
        int i = 0, j = 0;
        while(i < n && j < m) {
            carry += (X[i]-'0') + (Y[i]-'0');
            X[i] = '0' + (carry%10);
            carry = carry / 10;
            i++;
            j++;
        }
        
        while(i < n) {
            carry += X[i]-'0';
            X[i] = '0' + (carry%10);
            carry = carry / 10;
            i++;
        }
        
        while(carry) {
            X.push_back('0' + (carry%10));
            carry = carry / 10;
        }
        
        while(X.size() && X.back()=='0') {
            X.pop_back();
        }
        
        reverse(X.begin(), X.end());
        if(X.size() == 0) {
            return "0";
        }
        
        return X;
    }
};