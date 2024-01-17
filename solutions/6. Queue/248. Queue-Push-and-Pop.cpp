// ******** Given an array arr[] of size N, enqueue the elements of the array into a queue and then dequeue them. ********

// <======== Example ========>
// Input: N = 5, arr[] = 1 2 3 4 5 
// Output: 1 2 3 4 5

// Input: N = 7, arr[] = 1 6 43 1 2 0 5
// Output: 1 6 43 1 2 0 5


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




queue<int>_push(int arr[],int n) {
    queue<int> q;
    for(int i = 0; i < n; i++) {
        q.push(arr[i]);
    }
    
    return q;
}


void _pop(queue<int>s) {
    if(s.empty()) {
        return;
    }
    
    while(!s.empty()) {
        cout << s.front() << " ";
        s.pop();
    }
}