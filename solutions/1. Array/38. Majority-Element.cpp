// ******** Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element) ********

// <======== Example ========>
// Input: a[] = {1, 2, 3}, size = 3
// Output: -1

// Input: a[] = {3, 1, 3, 3, 2}, size = 5
// Output: 3




int majorityElement(int a[], int size) {
    int ans = 0, count = 0;
    for(int i = 0; i < size; i++) {
        if(count == 0) {
            ans = a[i];
        }

        if(ans == a[i]) {
            count++;
        }
        else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < size; i++) {
        if(a[i] == ans) {
            count++;
        }
    }

    if(count > size/2) {
        return ans;
    }

    return -1;
}