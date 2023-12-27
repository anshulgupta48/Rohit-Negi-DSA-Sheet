// ******** Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list. ********

// <======== Example ========>
// Input: N = 2, LinkedList: 1->2->3->4->5->6->7->8->9
// Output: 8

// Input: N = 5, LinkedList: 10->5->100->5
// Output: -1


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution{
public:
    int getNthFromLast(Node *head, int n) {
        Node* curr = head;
        int count = 0;
        while(curr != NULL) {
            count++;
            curr = curr->next;
        }
        
        if(n > count) {
            return -1;
        }
        Node* temp = head;
        for(int i = 1; i <= count; i++) {
            if(i <= (count-n)) {
                temp = temp->next;
            }
        }
        
        return temp->data;
    }
};