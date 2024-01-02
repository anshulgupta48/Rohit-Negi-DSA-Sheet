// ******** Given two linked lists, the task is to complete the function findIntersection(), that returns the intersection of two linked lists. Each of the two linked list contains distinct node values. ********

// <======== Example ========>
// Input: LinkedList1: 9->6->4->2->3->8, LinkedList2: 1->2->8->6
// Output: 6 2 8 


// Expected Time Complexity ==> O(m+n).
// Expected Auxiliary Space ==> O(m+n).




class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node *head = NULL, *curr = NULL;
        Node *curr1 = head1, *curr2 = head2;
        unordered_set<int> s;
        
        while(curr2 != NULL) {
            s.insert(curr2->data);
            curr2 = curr2->next;
        }
        
        while(curr1 != NULL) {
            if(s.find(curr1->data) != s.end()) {
                Node* temp = new Node(curr1->data);
                if(head == NULL) {
                    head = temp;
                    curr = temp;
                }
                else {
                    curr->next = temp;
                    curr = curr->next;
                }
            }
            
            curr1 = curr1->next;
        }
        
        return head;
    }
};
