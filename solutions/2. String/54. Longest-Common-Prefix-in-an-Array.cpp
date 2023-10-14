// ******** Given an array of N strings, find the longest common prefix among all strings present in the array ********

// <======== Example ========>
// Input: N = 4, arr[] = {geeksforgeeks, geeks, geek, geezer}
// Output: gee

// Input: N = 2, arr[] = {hello, world}
// Output: -1


// Expected Time Complexity ==> O(N*min(|arri|)).
// Expected Auxiliary Space ==> O(min(|arri|)) for result.




class Solution{
  public:
    string longestCommonPrefix (string arr[], int N) {
        sort(arr, arr+N);
        string str1 = arr[0];
        string str2 = arr[N-1];
        string ans = "";
        int n = str1.size(), m = str2.size();
        int i = 0, j = 0;
        
        while(i < n && j < m) {
            if(str1[i] == str2[j]) {
                ans.push_back(str1[i]);
            }
            else {
                break;
            }
            
            i++;
            j++;
        }
        
        if(ans.size() == 0) {
            return "-1";
        }
        
        return ans;
    }
};