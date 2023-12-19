// ******** Given an array of integers nums, sort the array in ascending order and return it. You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible. ********

// <======== Example ========>
// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]

// Input: nums = [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]




class Solution {
public:
    void merge(vector<int> &nums, int l, int r, int mid) {
        vector<int> temp(r-l+1);
        int i = l, j = mid+1;
        int k = 0;
        while(i<=mid || j<=r) {
            if(i > mid) {
                temp[k++] = nums[j++];
            }
            else if(j > r) {
                temp[k++]=nums[i++];
            }
            else {
                if(nums[i] < nums[j]) {
                    temp[k] = nums[i++];
                }
                else {
                    temp[k] = nums[j++];
                }
                k++;
            }
        }

        for(int m = 0; m < r-l+1; m++) {
            nums[m+l] = temp[m];
        }
    }


    void mergeSort(vector<int> &nums, int l, int r) {
        if(l >= r) {
            return;
        }

        int mid = (l+r)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        merge(nums, l, r, mid);
    }

    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};