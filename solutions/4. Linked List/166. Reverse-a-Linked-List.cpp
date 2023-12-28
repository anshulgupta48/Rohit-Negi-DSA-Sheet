// ******** Given a linked list of N nodes. The task is to reverse this list. ********

// <======== Example ========>
// Input: LinkedList: 1->2->3->4->5->6
// Output: 6 5 4 3 2 1

// Input: LinkedList: 2->7->8->9->10
// Output: 10 9 8 7 2


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    struct Node* reverseList(struct Node *head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};