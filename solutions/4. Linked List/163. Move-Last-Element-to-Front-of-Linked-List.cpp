// ******** You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the list. ********

// <======== Example ========>
// Input: N = 5, List = {2,5,6,2,1}
// Output: {1,2,5,6,2}

// Input: N = 1, List = {2}
// Output: {2}


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head->next == NULL) {
            return head;
        }
        
        ListNode* curr = head;
        while(curr->next->next != NULL) {
            curr = curr->next;
        }
        
        ListNode* temp = curr->next;
        curr->next = NULL;
        temp->next = head;
        return temp;
    }
};