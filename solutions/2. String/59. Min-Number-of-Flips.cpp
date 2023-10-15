// ******** Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped ********

// <======== Example ========>
// Input: S = "001"
// Output: 1

// Input: S = "0001010111"
// Output: 2


// Expected Time Complexity ==> O(|S|).
// Expected Auxiliary Space ==> O(1).




int minFlips (string S) {
    int n = S.size();
    int count1 = 0, count2 = 0;
    
    for(int i = 0; i < n; i++) {
        if(i%2 == 0 && S[i] == '0') {
            count1++;
        }
        else if(i%2 == 1 && S[i] == '1') {
            count1++;
        }
        
        if(i%2 == 0 && S[i] == '1') {
            count2++;
        }
        else if(i%2 == 1 && S[i] == '0') {
            count2++;
        }
    }
    
    int ans = min(count1, count2);
    return ans;
}