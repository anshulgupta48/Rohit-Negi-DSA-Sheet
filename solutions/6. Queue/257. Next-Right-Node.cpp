// ******** Given a Binary tree and a key in the binary tree, find the node right to the given key. If there is no node on right side, then return a node with value -1. ********

// <======== Example ========>
// Input:    10
//         /    \
//       2       6
//     /  \       \
//     8   4       5
//    and key = 2
// Output: 6

// Input:     10
//         /     \
//       2        6
//      / \        \
//     8   4        5
// and key = 5
// Output: -1


// Expected Time Complexity ==>  O(N)
// Expected Auxiliary Space ==>  O(N)




class Solution {
public:
    Node *nextRight(Node *root, int key) {
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            for(int i = 0; i < n; i++) {
                Node* temp = q.front();
                q.pop();
                
                if(temp->data == key && i != n-1) {
                    return q.front();
                }
                
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
        
        Node* ans = new Node(-1);
        return ans;
    }
};