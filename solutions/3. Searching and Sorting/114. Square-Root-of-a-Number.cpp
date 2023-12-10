// ******** Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x). ********

// <======== Example ========>
// Input: x = 5
// Output: 2

// Input: x = 4
// Output: 2


// Expected Time Complexity ==> O(logN)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    long long int floorSqrt(long long int x) {
        long long ans = 0;
        long long start = 1;
        long long end = x;
        
        while(start <= end) {
            long long mid = start + (end - start) / 2;
            if(mid*mid <= x) {
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