// ******** Given a number, in the form of an array Num[] of size N containing digits from 1 to 9(inclusive). The task is to find the next smallest palindrome strictly larger than the given number ********

// <======== Example ========>
// Input: N = 11, Num[] = {9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2}
// Output: 9 4 1 8 8 0 8 8 1 4 9

// Input: N = 5, Num[] = {2, 3, 5, 4, 5}
// Output: 2 3 6 3 2




class Solution{
public:
    int areAll9s(int* num, int n)  {
        for(int i = 0; i < n; i++) {
            if(num[i] != 9) {
                return 0;
            }
        }
        
        return 1;
    }
    
    
	void generateNextPalindromeUtil(int num[], int n) {
	    int mid = n / 2;
	    bool leftSmaller = false;
	    int i = mid - 1;
	    int j = (n % 2) ? mid+1 : mid;
	    
	    while(i >= 0 && num[i] == num[j]) {
	        i--;
	        j++;
	    }
	    
	    if(i < 0 || num[i] < num[j]) {
	        leftSmaller = true;
	    }
	    
	    while(i >= 0) {
	        num[j++] = num[i--];
	    }
	    
	    if(leftSmaller == true) {
	        int carry = 1;
	        i = mid - 1;
	        if(n%2 == 1) {
	            num[mid] += carry;
	            carry = num[mid] / 10;
	            num[mid] %= 10;
	            j = mid + 1;
	            
	        }
	        else {
	            j = mid;
	        }
	        
	        while(i >= 0) {
	           num[i] += carry;
	           carry = num[i] / 10;
	           num[i] %= 10;
	           num[j++] = num[i--];
	       }
	    }
	}
    
    
    vector<int> generateNextPalindrome(int num[], int n) {
        vector<int> ans;
        if(areAll9s(num, n)) {
            ans.push_back(1);
            for(int i = 1; i < n; i++) {
                ans.push_back(0);
            }
            ans.push_back(1);
        }
        else {
            generateNextPalindromeUtil(num, n);
            for(int i = 0; i < n; i++) {
                ans.push_back(num[i]);
            }
        }
        
        return ans;
    }
};