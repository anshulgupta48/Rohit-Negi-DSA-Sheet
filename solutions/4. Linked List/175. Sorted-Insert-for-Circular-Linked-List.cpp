// ******** Given a sorted circular linked list, the task is to insert a new node in this circular list so that it remains a sorted circular linked list. ********

// <======== Example ========>
// Input: LinkedList = 1->2->4, data = 2
// Output: 1 2 2 4

// Input: LinkedList = 1->4->7->9, data = 5
// Output: 1 4 5 7 9


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    Node *sortedInsert(Node* head, int data) {
        Node* curr = head;
        Node* temp = new Node(data);
        
        if(curr == NULL) {
            temp->next = temp;
            return temp;
        }
        else if(curr->data >= data) {
            while(curr->next != head) {
                curr = curr->next;
            }
            
            curr->next = temp;
            temp->next = head;
            return temp;
        }
        else {
            while(curr->next != head && curr->next->data < data) {
                curr = curr->next;
            }
            
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
    }
};