// ******** Given N non-negative integers a1,a2,....an where each represents a point at coordinate (i, ai). N vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i,0). Find two lines, which together with x-axis forms a container, such that it contains the most water ********
// Note --> In Case of single verticle line it will not be able to hold water.

// <======== Example ========>
// Input: N = 4, a[] = {1,5,4,3}
// Output: 6

// Input: N = 5, a[] = {3,1,2,4,5}
// Output: 12


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




long long maxArea(long long A[], int len) {
    long long ans = 0;
    int start = 0;
    int end = len-1;
    
    while(start < end) {
        long long area = min(A[start], A[end]) * (end - start);
        ans = max(ans, area);
        
        if(A[start] < A[end]) {
            start++;
        }
        else {
            end--;
        }
    }
    
    return ans;
}