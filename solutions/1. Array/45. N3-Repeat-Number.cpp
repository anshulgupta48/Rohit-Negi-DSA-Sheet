// ******** You're given a read-only array of N integers. Find out if any integer occurs more than N/3 times in the array in linear time and constant additional space. If so, return the integer. If not, return -1. If there are multiple solutions, return any one ********

// <======== Example ========>
// Input: [1 2 3 1 1]
// Output: 1 




int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int element1 = -1, element2 = -1;
    int count1 = 0, count2 = 0;
    
    for(int i = 0; i < n; i++) {
        if(element1 == A[i]) {
            count1++;
        }
    	else if(element2 == A[i]) {
            count2++;
        }
        else if(count1 == 0) {
            element1 = A[i];
            count1++;
        }
        else if(count2 == 0) {
            element2 = A[i];
            count2++;
        }
        else {
            count1--;
            count2--;
        }
    }
    
    count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++) {
        if(element1 == x) {
            count1++;
        }
        if(element2 == x) {
            count2++;
        }
    }
    
    if(count1 > (n/3)) {
        return element1;
    }
    else if(count2 > (n/3)) {
        return element2;
    }
    
    return -1;
}
