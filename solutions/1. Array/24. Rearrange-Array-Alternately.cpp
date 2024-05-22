// ******** Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on ********
// Note --> Modify the original array itself. Do it without using any extra space. You do not have to return anything.

// <======== Example ========>
// Input: n = 6, arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3

// Input: n = 11, arr[]={10,20,30,40,50,60,70,80,90,100,110}
// Output: 110 10 100 20 90 30 80 40 70 50 60


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int start = 0;
        int end = n-1;
        int maxNumber = arr[n-1] + 1;
        
        for(int i = 0; i < n; i++) {
            if(i%2 == 0) {
                arr[i] += (arr[end]%maxNumber) * maxNumber;
                end--;
            }
            else {
                arr[i] += (arr[start]%maxNumber) * maxNumber;
                start++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = arr[i] / maxNumber;
        }
    }
};