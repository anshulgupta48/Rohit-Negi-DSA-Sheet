// ******** Given a positive value N, we need to find the count of numbers smaller than or equal to N such that the difference between the number and sum of its digits is greater than or equal to the given specific value K. ********

// <======== Example ========>
// Input: N = 13, K = 2
// Output: 4

// Input: N = 10, K = 5
// Output: 1


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(N)




class Solution {
    public:
        int digitSum(long long N) {
            long long sum = 0;
            while(N > 0) {
                long long lastDigit = N % 10;
                sum += lastDigit;
                N = N / 10;
            }
            
            return sum;
        }
        
        
        long long int numberCount(long long int N, long long int K) {
            long long count = 0;
            for(long long i = 10; i <= N; i++) {
                if((i - digitSum(i)) >= K) {
                    count++;
                }
            }
            
            return count;
        }
};