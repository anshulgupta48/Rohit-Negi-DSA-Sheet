// ******** Implement a Queue using Linked List. A Query Q is of 2 Types (i) 1 x (a query of this type means  pushing 'x' into the queue) (ii) 2 (a query of this type means to pop an element from the queue and print the poped element) ********

// <======== Example ========>
// Input: Q = 5, Queries = 1 2 1 3 2 1 4 2
// Output: 2 3

// Input: Q = 4, Queries = 1 2 2 2 1 3 
// Output: 2 -1


// Expected Time Complexity ==> O(1) for both push() and pop().
// Expected Auxiliary Space ==> O(1) for both push() and pop().




void MyQueue:: push(int x) {
    QueueNode* temp = new QueueNode(x);
    if(front == NULL) {
        front = temp;
        rear = temp;
        return;
    }
    else {
        rear->next = temp;
        rear = temp;
    }
}


int MyQueue :: pop() {
    if(front == NULL) {
        return -1;
    }
    else {
        QueueNode* temp = front;
        int d = temp->data;
        front = front->next;
        if(front == NULL) {
            rear = NULL;
        }
        
        delete temp;
        return d;
    }
}