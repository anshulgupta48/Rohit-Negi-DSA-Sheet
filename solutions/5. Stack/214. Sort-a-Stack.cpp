// ******** Given a stack, the task is to sort it such that the top of the stack has the greatest element. ********

// <======== Example ========>
// Input: Stack: 3 2 1
// Output: 3 2 1

// Input: Stack: 11 2 32 3 41
// Output: 41 32 11 3 2


// Expected Time Complexity ==> O(N*N)
// Expected Auxiliary Space ==> O(N) Recursive




void sortedInsert(stack<int> &s, int x) {
    if(s.empty() || x>s.top()) {
        s.push(x);
        return;
    }
    
    int temp = s.top();
    s.pop();
    sortedInsert(s, x);
    s.push(temp);
}


void SortedStack :: sort() {
    if(!s.empty()) {
        int x = s.top();
        s.pop();
        sort();
        sortedInsert(s, x);
    }
}