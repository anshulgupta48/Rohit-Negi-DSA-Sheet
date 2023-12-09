// ******** Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct. ********
// Note -->  l and r denotes the starting and ending index of the array.

// <======== Example ========>
// Input: N = 6, arr[] = 7 10 4 3 20 15, K = 3, L=0, R=5
// Output: 7

// Input: N = 5, arr[] = 7 10 4 20 15, K = 4, L=0, R=4
// Output: 15


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(log(n))




class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        for(int i = 0; i < r+1; i++) {
            pq.push(arr[i]);
            while(pq.size() > k) {
                pq.pop();
            }
        }
        
        return pq.top();
    }
};