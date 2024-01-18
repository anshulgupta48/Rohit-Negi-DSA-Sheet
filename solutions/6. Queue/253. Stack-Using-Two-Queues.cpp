// ******** Implement a Stack using two queues q1 and q2. ********

// <======== Example ========>
// Input: push(2), push(3), pop(), push(4), pop()
// Output: 3 4

// Input: push(2), pop(), pop(), push(3)
// Output: 2 -1


// Expected Time Complexity ==>  O(N*log^2N)
// Expected Auxiliary Space ==>  O(N*log^2N)




void QueueStack :: push(int x) {
    q1.push(x);
    while(!q2.empty()) {
        q1.push(q2.front());
        q2.pop();
    }
    swap(q1, q2);
}


int QueueStack :: pop() {
    if(q2.empty()) {
        return -1;
    }
    
    int d = q2.front();
    q2.pop();
    return d;
}