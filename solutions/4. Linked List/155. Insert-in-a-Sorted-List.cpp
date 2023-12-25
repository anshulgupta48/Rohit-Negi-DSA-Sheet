// ******** Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted. ********

// <======== Example ========>
// Input: LinkedList: 25->36->47->58->69->80, data: 19
// Output: 19 25 36 47 58 69 80

// Input: LinkedList: 50->100, data: 75
// Output: 50 75 100


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution{
  public:
    Node *sortedInsert(struct Node* head, int data) {
        Node* temp = new Node(data);
        if(head == NULL) {
            return temp;
        }
        
        if(head->data >= temp->data) {
            temp->next = head;
            head = temp;
            return head;
        }
        
        Node* prev = head;
        Node* ans = head;
        while(head->data <= data && head->next) {
            prev = head;
            head = head->next;
        }
        
        if(head->data > data) {
            prev->next = temp;
            temp->next = head;
        }
        else {
            head->next = temp;
            return ans;
        }
        
        return ans;
    }
};