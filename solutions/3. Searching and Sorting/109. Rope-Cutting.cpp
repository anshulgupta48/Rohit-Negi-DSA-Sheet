// ******** You are given N ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. Display the number of ropes left after every cut operation until the length of each rope is zero. ********

// <======== Example ========>
// Input: arr[] = {5, 1, 1, 2, 3, 5}
// Output: 4 3 2

// Input: arr[] = {5, 1, 6, 9, 8, 11, 2, 2, 6, 5} 
// Output: 9 7 5 3 2 1


// Expected Time Complexity ==> O(N*LOG(N)).
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n) {
        sort(arr, arr+n);
        vector<int> ans;
        int curr = arr[0];
        
        int i = 0;
        while(curr != arr[n-1]) {
            if(arr[i] - curr > 0) {
                ans.push_back(n-i);
                curr = arr[i];
            }
            
            i++;
        }
        
        return ans;
    }
};