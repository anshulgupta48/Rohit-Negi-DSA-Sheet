// ******** Given a singly linked list of size N. The task is to swap elements in the linked list pairwise. For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3. ********
// Note --> You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

// <======== Example ========>
// Input: LinkedList: 1->2->2->4->5->6->7->8
// Output: 2 1 4 2 6 5 8 7

// Input: LinkedList: 1->3->4->7->9->10->1
// Output: 3 1 7 4 10 9 1


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    Node* pairWiseSwap(struct Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        Node* temp;
        
        while(curr != NULL && curr->next != NULL) {
            forward = curr->next;
            temp = forward->next;
            
            if(prev == NULL) {
                head = forward;
            }
            else {
                prev->next = forward;
            }
            
            forward->next = curr;
            curr->next = temp;
            prev = curr;
            curr = temp;
        }
        
        return head;
    }
};