// ******** You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. ********
// Note --> No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.

// <======== Example ========>
// Input: N = 2, value[] = {1,2}, node = 1
// Output: 2

// Input: N = 4, value[] = {10,20,4,30}, node = 20
// Output: 10 4 30


// Expected Time Complexity ==> O(1).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    void deleteNode(Node *del) {
       Node* temp = del->next;
       del->data = temp->data;
       del->next = temp->next;
       delete temp;
    }
};