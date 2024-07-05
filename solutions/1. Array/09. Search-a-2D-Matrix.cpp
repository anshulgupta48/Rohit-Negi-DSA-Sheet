// ******** You are given an m x n integer matrix matrix with the following two properties: Each row is sorted in non-decreasing order, The first integer of each row is greater than the last integer of the previous row. Given an integer target, return true if target is in matrix or false otherwise ********

// <======== Example ========>
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false


// Expected Time Complexity ==> O(log(m * n))




class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row*col - 1;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            int element = matrix[mid/col][mid%col];

            if(element == target) {
                return true;
            }
            else if(element < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};