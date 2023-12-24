// ******** Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list. ********

// <======== Example ========>
// Input: LinkedList: 1->2->3->4->5
// Output: 5

// Input: LinkedList: 2->4->6->7->5->1->0
// Output: 7


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    int getCount(struct Node* head){
        int count = 0;
        Node* temp = head;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        return count;
    }
};