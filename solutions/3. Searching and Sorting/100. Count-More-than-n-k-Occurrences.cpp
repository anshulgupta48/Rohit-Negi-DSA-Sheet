// ******** Given an array arr of size N and an element k. The task is to find the count of elements in the array that appear more than n/k times. ********

// <======== Example ========>
// Input: N = 8, arr = [3,1,2,2,1,2,3,3], k = 4
// Output: 2

// Input: N = 4, arr = [2,3,3,2], k = 3
// Output: 2


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution {
    public:
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int, int> mp;
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(auto x: mp) {
            if(x.second > (n/k)) {
                count++;
            }
        }
        
        return count;
    }
};