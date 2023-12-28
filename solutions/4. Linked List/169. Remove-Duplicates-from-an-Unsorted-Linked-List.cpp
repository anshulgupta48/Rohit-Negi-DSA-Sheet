// ******** Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed. ********

// <======== Example ========>
// Input: N = 4, value[] = {5,2,2,4}
// Output: 5 2 4

// Input: N = 5, value[] = {2,2,2,2,2}
// Output: 2


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(N).




class Solution {
    public:
    Node * removeDuplicates( Node *head) {
        unordered_set<int> st;
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL) {
            if(st.find(curr->data) != st.end()) {
                prev->next = curr->next;
                delete(curr);
            }
            else {
                st.insert(curr->data);
                prev = curr;
            }
            
            curr = curr->next;
        }
        
        return head;
    }
};