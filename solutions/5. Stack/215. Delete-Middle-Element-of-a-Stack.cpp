// ******** Given a stack, delete the middle element of the stack without using any additional data structure. Middle element:- floor((size_of_stack+1)/2) (1-based indexing) from bottom of the stack. ********
// Note --> The output shown by the compiler is the stack from top to bottom.

// <======== Example ========>
// Input: Stack = {10, 20, 30, 40, 50}
// Output: ModifiedStack = {10, 20, 40, 50}

// Input: Stack = {10 20 30 40}
// Output: ModifiedStack = {10 30 40}


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(N)




class Solution {
    public:
    void deleteMid(stack<int>&s, int sizeOfStack) {
        stack<int> temp;
        int mid = floor(sizeOfStack / 2);
        int i = 1;
        
        while(i <= mid) {
            temp.push(s.top());
            s.pop();
            i++;
        }
        s.pop();
        
        while(!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }
    }
};