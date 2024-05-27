// ******** Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element) ********

// <======== Example ========>
// Input: a[] = {1, 2, 3}, size = 3
// Output: -1

// Input: a[] = {3, 1, 3, 3, 2}, size = 5
// Output: 3

// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




int majorityElement(int a[], int size) {
    int n = nums.size();
    int element = -1;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0 || nums[i] == element) {
            element = nums[i];
            count++;
        }
        else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == element) {
            count++;
        }
    }

    if(count > n/2) {
        return element;
    }
    return -1;
}