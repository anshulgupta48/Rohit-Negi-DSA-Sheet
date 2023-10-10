// ******** Given an array arr[] of N positive integers. Find an integer denoting the maximum XOR subset value in the given array arr[] ********

// <======== Example ========>
// Input: N = 3, arr[] = {2, 4, 5}
// Output: 7

// Input: N = 3, arr[] = {9, 8, 5}
// Output: 13




class Solution {
    public:
    int maxSubsetXOR(int arr[], int N) {
        int index = 0;
        for(int i = 31; i >= 0; i--) {
            int maxElement = INT_MIN;
            int maxIndex = index;
            
            for(int j = index; j < N; j++) {
                int setBit = (arr[j]>>i) & 1;
                if(setBit != 0 && maxElement < arr[j]) {
                    maxElement = arr[j];
                    maxIndex = j;
                }
            }
            
            if(maxElement == INT_MIN) {
                continue;
            }
            swap(arr[index], arr[maxIndex]);
            maxIndex = index;
            
            for(int j = 0; j < N; j++) {
                int setBit = (arr[j]>>i) & 1;
                if(setBit != 0 && j != maxIndex) {
                    arr[j] = arr[j] ^ arr[maxIndex];
                }
            }
            
            index++;
        }
        
        
        int ans = 0;
        for(int i = 0; i < N; i++) {
            ans = ans ^ arr[i];
        }
        
        return ans;
    }
};