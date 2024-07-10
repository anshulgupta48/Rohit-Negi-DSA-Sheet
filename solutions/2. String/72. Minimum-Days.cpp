// ******** Given a string S of length N containing only lowercase alphabets. You are also given a permutation P of length N containing integers from 0 to N-1. In (i+1)'th day you can take the P[i] value of the permutation array and replace S[P[i]] with a '?'. For example in day 1, we can choose index of permutation array is i=0 and replace S[P[0]] with '?'. Similarly in day 2, we can choose index of permutation array is i=1. You can replace S[P[1]] with '?'. Similarly in day 3,we can choose index of permutation array is i=2. You can replace S[P[2]] with '?'. You have to tell the minimum number of days required, such that after it for all index i (0<=i<N-1), if S[i]!='?', then S[i]!=S[i+1]. ********

// <======== Example ========>
// Input: N = 4, S = "aabb", P[] = {2, 1, 3, 0}
// Output: 2

// Input: N = 4, S = "abca", P[] = {3, 0, 2, 1}
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        int n = S.length();
        int m = P.size();
        int count = 0;
        
        for(int i = 0; i < n-1; i++) {
            if(S[i] == S[i+1]) {
                count++;
            }
        }
        
        if(count == 0) {
            return 0;
        }
        
        for(int i = 0; i < m; i++) {
            if(P[i]-1 >= 0 && S[P[i]-1] == S[P[i]]) {
                count--;
            }
            if(P[i]+1 < n && S[P[i]+1] == S[P[i]]) {
                count--;
            }
            S[P[i]] = '?';
            if(count == 0) {
                return i+1;
            }
        }
        
        return m;
    }
};