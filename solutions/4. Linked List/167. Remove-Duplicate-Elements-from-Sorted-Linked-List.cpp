// ******** Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists). ********
// Note --> Try not to use extra space. The nodes are arranged in a sorted way.

// <======== Example ========>
// Input: LinkedList: 2->2->4->5
// Output: 2 4 5

// Input: LinkedList: 2->2->2->2->2
// Output: 2


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




Node *removeDuplicates(Node *head) {
    if(head->next == NULL) {
        return head;
    }
    
    Node* curr = head;
    while(curr->next != NULL) {
        if(curr->data == curr->next->data) {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
        }
    }
    
    return head;
}