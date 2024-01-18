// ******** Implement a Queue using an Array. Queries in the Queue are of the following type: (i) 1 x (a query of this type means  pushing 'x' into the queue) (ii) 2 (a query of this type means to pop element from queue and print the poped element) ********

// <======== Example ========>
// Input: Q = 5, Queries = 1 2 1 3 2 1 4 2
// Output: 2 3

// Input: Q = 4, Queries = 1 3 2 2 1 4   
// Output: 3 -1


// Expected Time Complexity ==> O(1) for both push() and pop().
// Expected Auxiliary Space ==> O(1) for both push() and pop().




void MyQueue :: push(int x) {
    arr[rear++] = x;
}


int MyQueue :: pop() {
    if(front == rear) {
        return -1;
    }
    else {
        int ans = arr[front];
        front++;
        if(front == rear) {
            front = rear = 0;
        }
        
        return ans;
    }
}