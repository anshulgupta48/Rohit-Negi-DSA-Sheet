// ******** Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list. ********

// <======== Example ========>
// Input: LinkedList = 1 <--> 3 <--> 4, x = 3
// Output: 1 3

// Input: LinkedList = 1 <--> 5 <--> 2 <--> 9, x = 1
// Output: 5 2 9


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    Node* deleteNode(Node *head_ref, int x) {
      Node* curr = head_ref;
      Node* prev = NULL;
      int count = 1;
      
      while(count == x) {
          curr->next->prev = NULL;
          return curr->next;
      }
      
      while(curr->next != NULL && count < x) {
          curr = curr->next;
          count++;
      }
      
      curr->prev->next = curr->next;
      return head_ref;
    }
};