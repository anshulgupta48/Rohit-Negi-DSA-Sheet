// ******** Let's give it a try! You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. ********

// <======== Example ========>
// Input: push(2), push(3), pop(), push(4), pop()
// Output: 3, 4

// Input: pop(), push(4), push(5), pop()
// Output: -1, 5


// Expected Time Complexity ==> O(1) for both push() and pop().
// Expected Auxiliary Space ==> O(1) for both push() and pop().




void MyStack ::push(int x) {
    StackNode* temp = new StackNode(x);
    temp->next = top;
    top = temp;
}


int MyStack ::pop() {
    if(top == NULL) {
        return -1;
    }
    else {
        StackNode* temp = top;
        top = top->next;
        int d = temp->data;
        delete temp;
        return d;
    }
}