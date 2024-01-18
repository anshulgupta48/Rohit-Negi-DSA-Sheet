// ******** Given array A[] of integers, the task is to complete the function findMaxDiff which finds the maximum absolute difference between nearest left and right smaller element of every element in array.If the element is the leftmost element, nearest smaller element on left side is considered as 0. Similarly if the element is the rightmost elements, smaller element on right side is considered as 0. ********

// <======== Example ========>
// Input: arr[] = {2, 1, 8}
// Output: 1

// Input: arr[] = {5, 1, 9, 2, 5, 1, 7}
// Output: 1




class Solution{
    public:
    int findMaxDiff(int A[], int n) {
        int leftSum[n];
        leftSum[0] = 0;
        int rightSum[n];
        rightSum[n-1] = 0;
        
        stack<int> s;
        s.push(A[0]);
        
        for(int i = 1; i < n; i++) {
            while(s.size() != 0 && s.top() >= A[i]) {
                s.pop();
            }
            if(s.size() != 0) {
                leftSum[i] = s.top();
            }
            else {
                leftSum[i] = 0;
            }
            s.push(A[i]);
        }
        
        while(!s.empty()) {
            s.pop();
        }
        s.push(A[n-1]);
        
        for(int i = n-2; i >= 0; i--) {
            while(s.size() != 0 && s.top() >= A[i]) {
                s.pop();
            }
            if(s.size() != 0) {
                rightSum[i] = s.top();
            }
            else {
                rightSum[i] = 0;
            }
            s.push(A[i]);
        }
        
        int maxDifference = INT_MIN;
        for(int i = 0; i < n; i++) {
            maxDifference = max(maxDifference, abs(leftSum[i] - rightSum[i]));
        }
        
        return maxDifference;
    }
};