// ******** Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing). ********

// <======== Example ========>
// Input: N = 7, x = 0, arr[] = {1,2,8,10,11,12,19}
// Output: -1

// Input: N = 7, x = 5, arr[] = {1,2,8,10,11,12,19}
// Output: 1


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        long long ans = -1;
        long long start = 0;
        long long end = n-1;
        
        while(start <= end) {
            long long mid = start + (end - start) / 2;
            if(v[mid] <= x) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return ans;
    }
};