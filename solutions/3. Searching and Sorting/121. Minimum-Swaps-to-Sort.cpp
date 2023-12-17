// ******** Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order. ********

// <======== Example ========>
// Input: nums = {2, 8, 5, 4}
// Output: 1

// Input: nums = {10, 19, 6, 3, 5}
// Output: 2


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution {
    public:
	int minSwaps(vector<int>&nums) {
	    int n = nums.size();
	    vector<pair<int, int>> v(n);
	    
	    for(int i = 0; i < n; i++) {
	        v[i] = {nums[i], i};
	    }
	    sort(v.begin(), v.end());
	    
	    int count = 0;
	    for(int i = 0; i < n; i++) {
	        if(v[i].second == i) {
	            continue;
	        }
	        else {
	            count++;
	            swap(v[i], v[v[i].second]);
	            i--;
	        }
	    }
	    
	    return count;
	}
};