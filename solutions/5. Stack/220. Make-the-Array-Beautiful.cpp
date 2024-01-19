// ******** Given an array of negative and non-negative integers. You have to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or non-negative. And you can do the following operation any number of times until the array becomes beautiful. If two adjacent integers are different i.e. one of them is negative and other is non-negative, remove them. Return the beautiful array after performing the above operation. ********
// Note --> An empty array is also a beautiful array. There can be many adjacent integers which are different as stated above. So remove different adjacent integers as described above from left to right.

// <======== Example ========>
// Input: 4 2 -2 1
// Output: 4 1

// Input: 2 -2 1 -1
// Output: []


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> ans;
        stack<int> s;
        
        for(int i = 0; i < arr.size(); i++) {
            if(s.empty()) {
                s.push(arr[i]);
            }
            else if((s.top() >= 0 && arr[i] < 0) || (s.top() < 0 && arr[i] >= 0)) {
                s.pop();
            }
            else {
                s.push(arr[i]);
            }
        }
        
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};