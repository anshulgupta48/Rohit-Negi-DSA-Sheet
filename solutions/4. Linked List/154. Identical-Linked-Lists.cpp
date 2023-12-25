// ******** Given two Singly Linked List of N and M nodes respectively. The task is to check whether two linked lists are identical or not. Two Linked Lists are identical when they have same data and with same arrangement too. ********

// <======== Example ========>
// Input: LinkedList1: 1->2->3->4->5->6, LinkedList2: 99->59->42->20
// Output: Not identical

// Input: LinkedList1: 1->2->3->4->5, LinkedList2: 1->2->3->4->5
// Output: Identical


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




bool areIdentical(struct Node *head1, struct Node *head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->data != temp2->data) {
            return false;
        }
        
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    if(temp1 == NULL && temp2 == NULL) {
        return true;
    }
    
    return false;
}