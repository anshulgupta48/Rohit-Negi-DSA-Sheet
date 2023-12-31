// ******** Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X. ********
// Note --> The 2 numbers of a pair should be parts of different lists.

// <======== Example ========>
// Input: L1 = 1->2->3->4->5->6, L2 = 11->12->13, X = 15
// Output: 3

// Input: L1 = 7->5->1->3, L2 = 3->5->2->8, X = 10
// Output: 2


// Expected Time Complexity ==> O(N+M).
// Expected Auxiliary Space ==> O(N+M).




class Solution{
  public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_set<int> st;
        Node* curr1 = head1;
        Node* curr2 = head2;
        
        while(curr1 != NULL) {
            st.insert(curr1->data);
            curr1 = curr1->next;
        }
        
        int count = 0;
        while(curr2 != NULL) {
            if(st.find(x - curr2->data) != st.end()) {
                count++;
            }
            
            curr2 = curr2->next;
        }
        
        return count;
    }
};