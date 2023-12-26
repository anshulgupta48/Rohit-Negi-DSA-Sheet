// ******** Given a singly linked list and a number k. Write a function to find the (N/k)th element, where N is the number of elements in the list. We need to consider ceil value in case of decimals. ********

// <======== Example ========>
// Input: 6, 1 2 3 4 5 6, 2
// Output: 3

// Input: 5, 2 7 9 3 5, 3
// Output: 7




int fractional_node(struct Node *head, int k) {
    int n = 0;
    Node* curr = head;
    
    while(curr != NULL) {
        n++;
        curr = curr->next;
    }
    
    curr = head;
    int c = (n%k==0) ? (n/k) : (n/k)+1;
    for(int i = 1; i <= c; i++) {
        if(i == c) {
            return curr->data;
        }
        
        curr = curr->next;
    }
}