// ******** Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with without changing the original lists. ********

// <======== Example ========>
// Input: LinkedList1 = 1->2->3->4->6, LinkedList2 = 2->4->6->8
// Output: 2 4 6

// Input: LinkedList1 = 10->20->40->50, LinkedList2 = 15->40
// Output: 40


// Expected Time Complexity ==> O(n+m).
// Expected Auxiliary Space ==> O(n+m).




class Solution {
    public:
    void insertAtTail(Node* &head, Node* &tail, int data) {
        Node* temp = new Node(data);
        if(head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    
    
    Node* findIntersection(Node* head1, Node* head2) {
        Node *newHead = NULL, *newTail = NULL;
        Node *curr1 = head1, *curr2 = head2;
        
        while(curr1 != NULL && curr2 != NULL) {
            if(curr1->data == curr2->data) {
                insertAtTail(newHead, newTail, curr1->data);
                curr1 = curr1->next;
                curr2 = curr2->next;
            }
            else if(curr1->data < curr2->data) {
                curr1 = curr1->next;
            }
            else {
                curr2 = curr2->next;
            }
        }
        
        return newHead;
    }
};