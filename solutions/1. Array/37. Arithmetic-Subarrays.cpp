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
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i = 0; i < l.size(); i++) {
            vector<int> temp;
            for(int j = l[i]; j <= r[i]; j++) {
                temp.push_back(nums[j]);
            }

            sort(temp.begin(), temp.end());
            int fd = temp[1] - temp[0];
            bool fl = true;
            
            for(int j = 2; j < temp.size(); j++) {
                if(temp[j] - temp[j-1] != fd) {
                    fl = false;
                    break;
                }
            }

            ans.push_back(fl);
        }

        return ans;
    }
};
