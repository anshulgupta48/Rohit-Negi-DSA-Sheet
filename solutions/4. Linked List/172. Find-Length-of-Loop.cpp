// ******** Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0. C is the position of the node to which the last node is connected. If it is 0 then no loop. ********

// <======== Example ========>
// Input: N = 10, value[]={25,14,19,33,10,21,39,90,58,45}, C = 4
// Output: 7

// Input: N = 2, value[] = {1,0}, C = 1
// Output: 2


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




int countNodesinLoop(struct Node *head) {
    Node* fast = head;
    Node* slow = head;
    bool loopExisted = false;
    
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            loopExisted = true;
            break;
        }
    }
    
    if(loopExisted == false) {
        return 0;
    }
    
    int count = 1;
    fast = fast->next;
    while(slow != fast) {
        count++;
        fast = fast->next;
    }
    
    return count;
}