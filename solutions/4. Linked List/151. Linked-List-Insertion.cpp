// ******** Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. Hint: When inserting at the end, make sure that you handle NULL explicitly. ********

// <======== Example ========>
// Input: LinkedList: 9->0->5->1->6->1->2->0->5->0
// Output: 5 2 9 5 6

// Input: LinkedList: 5->1->6->1->9->1
// Output: 5 6 9


// Expected Time Complexity ==> O(1) for insertAtBeginning() and O(N) for insertAtEnd().
// Expected Auxiliary Space ==> O(1) for both.




class Solution{
  public:
    Node *insertAtBegining(Node *head, int x) {
       Node *temp = new Node(x);
       temp->next = head;
       head = temp;
       return head;
    }
    
    
    Node *insertAtEnd(Node *head, int x)  {
       Node *temp = new Node(x);
       if(head == NULL) {
           return temp;
       }
       
       Node *curr = head;
       while(curr->next != NULL) {
           curr = curr->next;
       }
       
       curr->next = temp;
       return head;
    }
};