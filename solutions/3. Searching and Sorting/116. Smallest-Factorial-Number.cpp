// ******** Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes. ********

// <======== Example ========>
// Input: n = 1
// Output: 5

// Input: n = 6
// Output: 25


// Expected Time Complexity ==> O(log2 N * log5 N)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
        bool check(int p, int n) {
            int temp = p, count = 0, f = 5;
            while(f <= temp) {
                count += temp / f;
                f = f * 5;
            }
            
            return (count >= n);
        }
        
        
        int findNum(int n) {
            if(n == 1) {
                return 5;
            }
            
            int start = 0;
            int end = 5*n;
            while(start < end) {
                int mid = start + (end - start) / 2;
                if(check(mid, n)) {
                    end = mid;
                }
                else {
                    start = mid + 1;
                }
            }
            
            return start;
        }
};