// ******** Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on ********
// Note --> Modify the original array itself. Do it without using any extra space. You do not have to return anything.

// <======== Example ========>
// Input: n = 6, arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3

// Input: n = 11, arr[]={10,20,30,40,50,60,70,80,90,100,110}
// Output: 110 10 100 20 90 30 80 40 70 50 60


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long m = n;
        long long totalSum = m*(m+1) / 2;
        long long sum = 0;
        long long squareTotalSum = (m*(m+1)*(2*m+1)) / 6;
        long long squareSum = 0;
        
        for(int i = 0; i < m; i++) {
            sum += arr[i];
            squareSum += (long long)arr[i] * (long long)arr[i];
        }
        
        long long val1 = sum - totalSum;
        long long val2 = squareSum - squareTotalSum;
        val2 = val2 / val1;
        
        long long x = (val1 + val2) / 2;
        long long y = x - val1;
        
        return {(int)x, (int)y};
    }
};