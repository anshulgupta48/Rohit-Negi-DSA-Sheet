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
        string ans = "";
        sort(arr, arr+N);
        string str1 = arr[0];
        string str2 = arr[N-1];
        
        int i = 0;
        int j = 0;
        while(i < str1.length() && j < str2.length()) {
            if(str1[i] == str2[j]) {
                ans += str1[i];
                i++;
                j++;
            }
            else {
                break;
            }
        }
        
        return ans;
    }
};
