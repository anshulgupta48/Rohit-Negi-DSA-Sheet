// ******** Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(), that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. The function should retain the original stack content. ********

// <======== Example ========>
// Input: 6, 1 2 3 4 5 6
// Output: Yes

// Input: 5, 1 5 3 9 7
// Output: No




bool pairWiseConsecutive(stack<int> s) {
    stack<int> aux;
    int aux_size = 0;
    
    while(!s.empty()) {
        aux.push(s.top());
        aux_size++;
        s.pop();
    }
    
    bool result = true;
    while(aux_size > 1) {
        int x = aux.top();
        aux.pop();
        int y = aux.top();
        aux.pop();
        
        if(abs(x-y) != 1) {
            result = false;
        }
        s.push(x);
        s.push(y);
        aux_size--;
        aux_size--;
    }
    
    if(aux.size() == 1) {
        s.push(aux.top());
    }
    
    return result;
}