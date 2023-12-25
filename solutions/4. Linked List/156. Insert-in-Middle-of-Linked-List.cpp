// ******** Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list. ********

// <======== Example ========>
// Input: LinkedList = 1->2->4, key = 3
// Output: 1 2 3 4

// Input: LinkedList = 10->20->40->50, key = 30
// Output: 10 20 30 40 50


// Expected Time Complexity ==> O(N).
// Expected Auxiliary Space ==> O(1).




Node* insertInMiddle(Node* head, int x) {
	Node* temp = new Node(x);
	Node* slow = head;
	Node* fast = head;
	
	while(fast->next != NULL && fast->next->next != NULL) {
	    slow = slow->next;
	    fast = fast->next->next;
	}
	
	temp->next = slow->next;
	slow->next = temp;
	return head;
}