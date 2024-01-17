// ******** Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first. ********

// <======== Example ========>
// Input: N = 5, A[] = {5,5,4,6,4}
// Output: 4 4 5 5 6

// Input: N = 5, A[] = {9,9,9,2,5}
// Output: 9 9 9 2 5




class Solution{
    public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        if(a.second == b.second) {
            return (a.first < b.first);
        }
        
        return (a.second > b.second);
    }
    
    
    vector<int> sortByFreq(int arr[],int n) {
        vector<pair<int, int>> ans;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            ans.push_back({arr[i], mp[arr[i]]});
        }
        
        sort(ans.begin(), ans.end(), cmp);
        vector<int> temp;
        for(int i = 0; i < n; i++) {
            temp.push_back(ans[i].first);
        }
        
        return temp;
    }
};
