// ******** Given two arrays of length N and M, print the merged array in ascending order containing only unique elements. ********

// <======== Example ========>
// Input: N = 2, a[] = {1, 8}, M = 2, b[] = {10, 11}
// Output: answer[] = {1, 8, 10, 11}

// Input: N = 5, a[] = {7, 1, 5, 3, 9}, M = 6, b[]  = {8, 4, 3, 5, 2, 6}
// Output: answer[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[]) {
        int i = 0;
        int k = 0;
        
        for(int j = 0; j < n; j++) {
            answer[i++] = a[j];
        }
        
        for(int j = 0; j < m; j++) {
            answer[i++] = b[j];
        }
        sort(answer, answer+i);
        
        for(int j = 0; j < i; j++) {
            if(answer[j] == answer[j+1]) {
                continue;
            }
            else {
                answer[k++] = answer[j];
            }
        }
        
        return k;
    }
};