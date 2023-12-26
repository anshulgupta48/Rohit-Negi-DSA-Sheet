// ******** Given a single linked list of size M, your task is to complete the function sumOfLastN_Nodes(), which should return the sum of last N nodes of the linked list. ********

// <======== Example ========>
// Input: 6, 3, 5 9 6 3 4 10
// Output: 17

// Input: 2, 2, 1 2
// Output: 3




struct Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}


int sumOfLastN_Nodes(struct Node* head, int n) {
      Node* rev = reverse(head);
      int sum = 0;
      
      while(n--) {
          sum += rev->data;
          rev = rev->next;
      }
      
      return sum;
}