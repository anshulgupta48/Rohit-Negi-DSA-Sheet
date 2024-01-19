// ******** Implement a Queue using 2 stacks s1 and s2. A Query Q is of 2 Types (i) 1 x (a query of this type means  pushing 'x' into the queue) (ii) 2   (a query of this type means to pop element from queue and print the poped element) ********
// Note --> If there is no element return -1 as answer while popping.

// <======== Example ========>
// Input: 5, 1 2 1 3 2 1 4 2
// Output: 2 3

// Input: 4, 1 2 2 2 1 4
// Output: 2 -1


// Expected Time Complexity ==>  O(1) for push() and O(N) for pop() or O(N) for push() and O(1) for pop()  
// Expected Auxiliary Space ==>  O(1)




void StackQueue :: push(int x) {
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    
    while(!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
}


int StackQueue :: pop() {
    if(s1.empty()) {
        return -1;
    }
    
    int x = s1.top();
    s1.pop();
    return x;
}