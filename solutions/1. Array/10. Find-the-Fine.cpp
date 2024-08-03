// ******** Given an array of penalties fine[], an array of car numbers car[], and also the date. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa ********

// <======== Example ========>
// Input: N = 4, date = 12, car[] = {2375, 7682, 2325, 2352}, fine[] = {250, 500, 350, 200}
// Output: 600

// Input: N = 3, date = 8, car[] = {2222, 2223, 2224}, fine[] = {200, 300, 400}
// Output: 300


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    long long int totalFine(int date, int car[], int fine[]) {
        int n = car.size();
        long long int ans = 0;
        
        if(date%2 == 0) {
            for(int i = 0; i < n; i++) {
                if(car[i]%2 != 0) {
                    ans += fine[i];
                }
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                if(car[i]%2 == 0) {
                    ans += fine[i];
                }
            }
        }
        
        return ans;
    }
};