// ******** Write a program to implement a Stack using Array. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. ********

// <======== Example ========>
// Input: push(2), push(3), pop(), push(4), pop()
// Output: 3, 4

// Input: pop(), push(4), push(5), pop()
// Output: -1, 5


// Expected Time Complexity ==> O(1) for both push() and pop().
// Expected Auxiliary Space ==> O(1) for both push() and pop().




void MyStack :: push(int x) {
    top++;
    arr[top] = x;
}


int MyStack :: pop() {
    if(top != -1) {
        int ans = arr[top];
        top--;
        return ans;
    }
    else {
        return -1;
    }
}