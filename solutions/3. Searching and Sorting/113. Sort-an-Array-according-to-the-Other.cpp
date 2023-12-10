// ******** Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] such that all the relative positions of the elements in the first array are the same as the elements in the second array A2[ ]. ********
// Note --> If elements are repeated in the second array, consider their first occurance only.

// <======== Example ========>
// Input: N = 11, M = 4, A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}, A2[] = {2, 1, 8, 3}
// Output: 2 2 1 1 8 8 3 5 6 7 9

// Input: N = 11, M = 4, A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}, A2[] = {99, 22, 444, 56}
// Output: 1 1 2 2 3 5 6 7 8 8 9


// Expected Time Complexity ==> O(N * Log(N))
// Expected Auxiliary Space ==> O(N)




class Solution{
    public:
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) {
        vector<int> ans;
        map<int, int> mp;
        
        for(int i = 0; i < N; i++) {
            mp[A1[i]]++;
        }
        
        for(int i = 0; i < M; i++) {
            while(mp[A2[i]]--) {
                ans.push_back(A2[i]);
            }
            
            mp[A2[i]] = 0;
        }
        
        for(auto x: mp) {
            while(x.second--) {
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};