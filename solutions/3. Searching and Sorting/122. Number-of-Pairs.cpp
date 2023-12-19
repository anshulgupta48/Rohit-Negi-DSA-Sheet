// ******** Given two arrays X[] and Y[] of size M and N respectively. Find number of pairs such that x^y > y^x where x is an element from X[] and y is an element from Y[]. ********

// <======== Example ========>
// Input: M = 3, N = 2, X[] = {2, 1, 6}, Y = {1, 5}
// Output: 3

// Input: M = 3, N = 3, X[] = {10, 19, 18}, Y[] = {11, 15, 9}
// Output: 2


// Expected Time Complexity ==> O(N*logN + M*logM)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
    int getIndex(int arr[], int n, int key) {
        int ans = -1;
        int start = 0, end = n-1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] > key) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    
    long long countPairs(int X[], int Y[], int m, int n) {
        int zero = 0, one = 0, two = 0, three = 0, four = 0;
        sort(X, X+m);
        sort(Y, Y+n);
        for(int i = 0; i < n; i++) {
            if(Y[i] == 0) zero++;
            if(Y[i] == 1) one++;
            if(Y[i] == 2) two++;
            if(Y[i] == 3) three++;
            if(Y[i] == 4) four++;
        }
        
        long long ans = 0;
        for(int i = 0; i < m; i++) {
            if(X[i] == 0) {
                continue;
            }
            else if(X[i] == 1) {
                ans += zero;
            }
            else if(X[i] == 2) {
                int index = getIndex(Y, n, 2);
                if(index != -1) {
                    ans += (n-index);
                }
                
                ans -= three;
                ans -= four;
                ans += (one + zero);
            }
            else {
                int index = getIndex(Y, n, X[i]);
                if(index != -1) {
                    ans += (n-index);
                }
                
                ans += (one + zero);
                if(X[i] == 3) {
                    ans += two;
                }
            }
        }
        
        return ans;
    }
};