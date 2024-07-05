// ******** Vaibhav likes to play with numbers and he has N numbers. One day he was placing the numbers on the playing board just to count that how many numbers he has. He was placing the numbers in increasing order i.e. from 1 to N. But when he was putting the numbers back into his bag, some numbers fell down onto the floor. He picked up all the numbers but one number, he couldn't find. Now he has to go somewhere urgently, so he asks you to find the missing number ********
// Note --> Don't use Sorting

// <======== Example ========>
// Input: N = 4, A[] = {1, 4, 3}
// Output: 2

// Input: N = 5, A[] = {2, 5, 3, 1}
// Output: 4


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




int missingNumber(int n, vector<int> &arr) {
    int totalSum = n*(n+1) / 2;
    int sum = 0;
        
    for(int i = 0; i < n-1; i++) {
        sum += arr[i];
    }
        
    return (totalSum - sum);
}