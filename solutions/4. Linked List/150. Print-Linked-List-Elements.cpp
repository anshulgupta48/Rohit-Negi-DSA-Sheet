// ******** Given a linked list. Print all the elements of the linked list. ********
// Note --> End of Line is handled by driver code itself. You just have to end with a single space.

// <======== Example ========>
// Input: N=2, LinkedList={1 , 2}
// Output: 1 2

// Input: N = 3, Linked List = { 49, 10, 30}
// Output: 49 10 30


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution {
    public:
    void display(Node *head) {
      Node *temp = head;
      while(temp != NULL) {
          cout << temp->data << " ";
          temp = temp->next;
      }
    }
};