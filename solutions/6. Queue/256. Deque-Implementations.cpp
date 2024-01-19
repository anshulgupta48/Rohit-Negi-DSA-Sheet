// ******** A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends. Given a deque and Q queries. The task is to perform some operation on dequeue according to the queries as given below: 1. pb: query to push back the element x. 2. pf: query to push element x(given with query) to the front of the deque. 3. pp_b(): query to delete element from the back of the deque. 4. f: query to return a front element from the deque. ********

// <======== Example ========>
// Input: 5, pf 5, pf 10, pb 6, f, pp_b
// Output: 10

// Input: 2, pf 5, f
// Output: 5


// Expected Time Complexity ==>  O(1)
// Expected Auxiliary Space ==>  O(1)




void push_back_pb(deque<int> &dq, int x) {
    dq.push_back(x);
}


void pop_back_ppb(deque<int> &dq) {
    if (!dq.empty()) {
        dq.pop_back();
    }
    else {
        return;
    }
}


int front_dq(deque<int> &dq) {
    if (!dq.empty()) {
        return dq.front();
    }
    else {
        return -1;
    }
}


void push_front_pf(deque<int> &dq, int x) {
    dq.push_front(x);
}