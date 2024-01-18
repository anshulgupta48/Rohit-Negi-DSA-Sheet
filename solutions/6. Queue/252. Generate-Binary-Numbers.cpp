// ******** Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N. ********

// <======== Example ========>
// Input: N = 2
// Output: 1 10

// Input: N = 5;
// Output: 1 10 11 100 101


// Expected Time Complexity ==>  O(N*log^2N)
// Expected Auxiliary Space ==>  O(N*log^2N)




vector<string> generate(int N) {
    vector<string> ans;
    queue<string> q;
    q.push("1");
    
    for(int i = 1; i <= N; i++) {
        string temp = q.front();
        ans.push_back(temp);
        q.pop();
        q.push(temp+"0");
        q.push(temp+"1");
    }
    
    return ans;
}