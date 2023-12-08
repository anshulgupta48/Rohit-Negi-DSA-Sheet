// ******** Given an array A of integers. Find three numbers such that sum of two elements equals the third element and return the triplet in a container result, if no such triplet is found return the container as empty. ********

// <======== Example ========>
// Input: n = 5, arr = {1, 2, 3, 4, 5}
// Output: 1

// Input: n = 3, arr = {3, 3, 3}
// Output: -1




vector<int> findTriplet(int arr[], int n) {
    vector<int> ans;
    sort(arr, arr+n);
    
    for(int i = n-1; i >= 2; i--) {
        int j = 0;
        int k = i-1;
        
        while(j < k) {
            if(arr[i] == arr[j] + arr[k]) {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
                return ans;
            }
            else if(arr[i] > arr[j] + arr[k]) {
                j++;
            }
            else {
                k--;
            }
        }
    }
    
    return ans;
}