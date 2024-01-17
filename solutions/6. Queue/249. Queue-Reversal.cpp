// ******** Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete the function rev(), that reverses the N elements of the queue. ********

// <======== Example ========>
// Input: 6, 4 3 1 10 2 6
// Output: 6 2 10 1 3 4

// Input: 4, 4 3 2 1 
// Output: 1 2 3 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
    public:
    queue<int> rev(queue<int> q) {
        vector<int> ans;
        while(!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }
        
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++) {
            q.push(ans[i]);
        }
        
        return q;
    }
};