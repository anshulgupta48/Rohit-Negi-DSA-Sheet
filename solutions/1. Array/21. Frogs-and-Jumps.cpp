// ******** N frogs are positioned at one end of the pond. All frogs want to reach the other end of the pond as soon as possible. The pond has some leaves arranged in a straight line. Each frog has the strength to jump exactly K leaves. For example, a  frog having strength 2 will visit the leaves 2, 4, 6, ...  etc. while crossing the pond. Given the strength of each frog and the number of leaves, your task is to find the number of leaves that not be visited by any of the frogs when all frogs have reached the other end of the pond.  ********

// <======== Example ========>
// Input: N = 3, leaves = 4, frogs[] = {3, 2, 4} 
// Output: 1

// Input: N = 3, leaves = 6, frogs[] = {1, 3, 5} 
// Output: 0


// Expected Time Complexity ==> O(N*log(leaves))
// Expected Auxiliary Space ==> O(leaves)




class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        vector<int> visited(leaves+1, 0);
        for(int i = 0; i < N; i++) {
            int temp = frogs[i];
            
            if(temp <= leaves && visited[temp] == 0) {
                for(int j = temp; j <= leaves; j+=temp) {
                    visited[j] = 1;
                }
            }
        }
        
        int ans = 0;
        for(int i = 1; i <= leaves; i++) {
            if(visited[i] == 0) {
                ans++;
            }
        }
        
        return ans;
    }
};