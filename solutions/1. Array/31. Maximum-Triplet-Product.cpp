// ******** Given an array arr of size n, the task is to find the maximum triplet product in the array ********

// <======== Example ========>
// Input: n = 4, arr[] = {1, 2, 3, 5}
// Output: 30

// Input: n = 7, arr[] = {-3, -5, 1, 0, 8, 3, -2} 
// Output: 120


// Expected Time Complexity ==> O(n).
// Expected Auxiliary Space ==> O(1).




class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n) {
    	long long firstMax = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;
    	long long firstMin = INT_MAX, secondMin = INT_MAX;
    	
    	for(int i = 0; i < n; i++) {
    	    if(arr[i] > firstMax) {
    	        thirdMax = secondMax;
    	        secondMax = firstMax;
    	        firstMax = arr[i];
    	    }
    	    else if(arr[i] > secondMax) {
    	        thirdMax = secondMax;
    	        secondMax = arr[i];
    	    }
    	    else if(arr[i] > thirdMax) {
    	        thirdMax = arr[i];
    	    }
    	    
    	    
    	    if(arr[i] < firstMin) {
    	        secondMin = firstMin;
    	        firstMin = arr[i];
    	    }
    	    else if(arr[i] < secondMin) {
    	        secondMin = arr[i];
    	    }
    	}
    	
    	
    	long long triplet1 = firstMax * secondMax * thirdMax;
    	long long triplet2 = firstMax * firstMin * secondMin;
    	if(triplet1 > triplet2) {
    	    return triplet1;
    	}
    	
    	return triplet2;
    }
};