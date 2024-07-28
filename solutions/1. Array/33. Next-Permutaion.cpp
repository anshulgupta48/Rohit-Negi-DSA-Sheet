// ******** A permutation of an array of integers is an arrangement of its members into a sequence or linear order. The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order). Given an array of integers nums, find the next permutation of nums. The replacement must be in place and use only constant extra memory ********

// <======== Example ========>
// Input: nums = [1,2,3]
// Output: [1,3,2]

// Input: nums = [3,2,1]
// Output: [1,2,3]

// Input: nums = [1,1,5]
// Output: [1,5,1]




class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        int j = n-1;

        while(i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }
        if(i < 0) {
            return reverse(nums.begin(), nums.end());
        }

        while(i <= j && nums[i] >= nums[j]) {
            j--;
        }
        swap(nums[i], nums[j]);
        sort(nums.begin()+i+1, nums.end());
    }
};