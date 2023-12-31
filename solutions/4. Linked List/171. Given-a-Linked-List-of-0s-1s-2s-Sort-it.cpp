// ******** Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s. ********

// <======== Example ========>
// Input: N = 8, value[] = {1,2,2,1,2,0,2,2}
// Output: 0 1 1 2 2 2 2 2

// Input: N = 4, value[] = {2,2,0,1}
// Output: 0 1 2 2


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(N).




class Solution {
    public:
    Node* segregate(Node *head) {
        int c0 = 0, c1 = 0, c2 = 0;
        Node* curr = head;
        while(curr != NULL) {
            if(curr->data == 0) c0++;
            else if(curr->data == 1) c1++;
            else c2++;
            curr = curr->next;
        }
        
        curr = head;
        while(curr != NULL) {
            if(c0 != 0) {
                curr->data = 0;
                c0--;
            }
            else if(c1 != 0) {
                curr->data = 1;
                c1--;
            }
            else {
                curr->data = 2;
                c2--;
            }
            
            curr = curr->next;
        }
        
        return head;
    }
};