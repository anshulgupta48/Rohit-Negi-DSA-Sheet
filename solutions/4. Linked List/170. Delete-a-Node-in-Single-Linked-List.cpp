// ******** Given a singly linked list and an integer x.Delete xth node from the singly linked list. ********

// <======== Example ========>
// Input: 1 -> 3 -> 4, x = 3
// Output: 1 -> 3

// Input: 1 -> 5 -> 2 -> 9, x = 2
// Output: 1 -> 2 -> 9




Node* deleteNode(Node *head,int x) {
    if(x == 1) {
        return head->next;
    }
    
    Node* curr = head;
    int count = 0;
    
    while(curr != NULL) {
        count++;
        if(count == x-1) {
            curr->next = curr->next->next;
            break;
        }
        
        curr = curr->next;
    }
    
    return head;
}