// ******** You are given an array of N+2 integer elements. All elements of the array are in the range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers. ********
// Note --> Return the numbers in their order of appearing twice. So, if X and Y are the repeating numbers, and X repeats twice before Y repeating twice, then the order should be (X, Y).

// <======== Example ========>
// Input: N = 4, array[] = {1,2,1,3,4,3}
// Output: 1 3

// Input: N = 2, array[] = {1,2,2,1}
// Output: 2 1


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    vector<int> twoRepeated (int arr[], int N) {
        vector<int> ans;
        for(int i = 0; i < n+2; i++) {
            if(arr[abs(arr[i])] > 0) {
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            }
            else {
                ans.push_back(abs(arr[i]));
            }
        }
        
        return ans;
    }
};