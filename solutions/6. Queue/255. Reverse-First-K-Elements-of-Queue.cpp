// ******** Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order. ********
// Note --> The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.

// <======== Example ========>
// Input: 5 3, 1 2 3 4 5
// Output: 3 2 1 4 5

// Input: 4 4, 4 3 2 1
// Output: 1 2 3 4


// Expected Time Complexity ==>  O(N)
// Expected Auxiliary Space ==>  O(K)




class Solution {
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> s;
        queue<int> ans;
        
        while(!q.empty() && k > 0) {
            s.push(q.front());
            q.pop();
            k--;
        }
        
        while(!s.empty()) {
            ans.push(s.top());
            s.pop();
        }
        
        while(!q.empty()) {
            ans.push(q.front());
            q.pop();
        }
        
        return ans;
    }
};