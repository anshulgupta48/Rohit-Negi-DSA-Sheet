// ******** Given an array of integers. Find the Inversion Count in the array. Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j. ********

// <======== Example ========>
// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3

// Input: N = 5, arr[] = {2, 3, 4, 5, 6}
// Output: 0

// Input: N = 3, arr[] = {10, 10, 10}
// Output: 0


// Expected Time Complexity ==> O(N*logN)
// Expected Auxiliary Space ==> O(N)




class Solution{
  public:
    long long merge(long long arr[], long long l, long long m, long long r) {
         long long n1 = m-l+1, n2 = r-m;
         long long a[n1], b[n2];
         for(long long i = 0; i < n1; i++) {
             a[i] = arr[l+i];
         }
         for(long long i = 0; i < n2; i++) {
             b[i] = arr[m+i+1];
         }
         
         long long i = 0, j = 0, k = l, count = 0;
         while(i < n1 && j < n2) {
             if(a[i] <= b[j]) {
                 arr[k++] = a[i++];
             }
             else {
                 arr[k++] = b[j++];
                 count += (n1 - i);
             }
         }
         
         while(i < n1) {
             arr[k++] = a[i++];
         }
         while(j < n2) {
             arr[k++] = b[j++];
         }
         
         return count;
    }
    
    
    long long mergeSort(long long arr[], long long l, long long r) {
        long long count = 0;
        if(l >= r) {
            return count;
        }
        
        long long mid = l + (r - l) / 2;
        count += mergeSort(arr, l, mid);
        count += mergeSort(arr, mid+1, r);
        count += merge(arr, l, mid, r);
        return count;
    }
  
  
    long long int inversionCount(long long arr[], long long N) {
        return mergeSort(arr, 0, N-1);
    }
};