// ******** Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular. ********
// Note --> The linked list does not contains any inner loop.

// <======== Example ========>
// Input: LinkedList: 1->2->3->4->5
// Output: 1 

// Input: LinkedList: 2->4->6->7->5->1
// Output: 0


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




bool isCircular(Node *head) {
    Node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
        if(curr == head) {
            return true;
        }
    }
    
    return false;
}
