// ******** Given a doubly linked list of n elements. Your task is to reverse the doubly linked list in-place. ********

// <======== Example ========>
// Input: LinkedList: 3 <--> 4 <--> 5
// Output: 5 4 3

// Input: LinkedList: 75 <--> 122 <--> 59 <--> 196
// Output: 196 59 122 75


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    Node* reverseDLL(Node * head) {
        Node* ptr1 = head;
        Node* ptr2 = ptr1->next;
        ptr1->next = NULL;
        ptr1->prev = ptr2;
        
        while(ptr2 != NULL) {
            ptr2->prev = ptr2->next;
            ptr2->next = ptr1;
            ptr1 = ptr2;
            ptr2 = ptr2->prev;
        }
        
        return ptr1;
    }
};