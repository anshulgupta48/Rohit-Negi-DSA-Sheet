// ******** Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop. ********

// <======== Example ========>
// Input: N = 3, value[] = {1,3,4}, x(position at which tail is connected) = 2
// Output: True

// Input: N = 4, value[] = {1,8,3,4}, x = 0
// Output: False


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution {
    public:
    bool detectLoop(Node* head) {
        Node* fast = head;
        Node* slow = head;
        
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                return true;
            }
        }
        
        return false;
    }
};