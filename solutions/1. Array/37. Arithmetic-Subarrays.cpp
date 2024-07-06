// ******** A sequence of numbers is called arithmetic if it consists of at least two elements, and the difference between every two consecutive elements is the same. More formally, a sequence s is arithmetic if and only if s[i+1] - s[i] == s[1] - s[0] for all valid i.
// You are given an array of n integers, nums, and two arrays of m integers each, l and r, representing the m range queries, where the ith query is the range [l[i], r[i]]. All the arrays are 0-indexed.
// Return a list of boolean elements answer, where answer[i] is true if the subarray nums[l[i]], nums[l[i]+1], ... , nums[r[i]] can be rearranged to form an arithmetic sequence, and false otherwise. ********

// <======== Example ========>
// Input: nums = [4,6,5,9,3,7], l = [0,0,2], r = [2,3,5]
// Output: [true,false,true] 

// Input: plants = nums = [-12,-9,-3,-12,-6,15,20,-25,-20,-15,-10], l = [0,1,6,4,8,7], r = [4,4,9,7,9,10]
// Output: [false,true,false,false,true,true]




class Solution {
public:
    bool isArithmetic(vector<int> &temp) {
        int n = temp.size();
        if(n == 2) {
            return true;
        }

        int d = temp[1] - temp[0];
        for(int i = 2; i < n; i++) {
            if(temp[i] - temp[i-1] != d) {
                return false;
            }
        }

        return true;
    }
    

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool> ans;

        for(int i = 0; i < n; i++) {
            int a = l[i];
            int b = r[i];
            vector<int> temp;

            for(int j = a; j <= b; j++) {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());

            if(isArithmetic(temp)) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
