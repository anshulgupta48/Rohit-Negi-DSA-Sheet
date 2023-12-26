// ******** Given a Singly Linked List of size N, delete all alternate nodes of the list. ********

// <======== Example ========>
// Input: LinkedList: 1->2->3->4->5->6
// Output: 1->3->5

// Input: LinkedList: 99->59->42->20
// Output: 99->42


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




void deleteAlt(struct Node *head){
    Node* temp = head;
    while(temp != NULL && temp->next != NULL) {
        temp->next = temp->next->next;
        temp = temp->next;
    }
}