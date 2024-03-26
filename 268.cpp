// My Approach Towards the Solution :-
// I used Bit manipulation to solve the problem. As we know that if we use XOR operator on same 
// numbers, it will return 0, with this I applied the XOR operator on the numbers in series range [0,n]  
// where n is size of original vector. and then stored the output and again applied the xor operator on  
// all elements of nums vector. After appiying the XOR operator, like elements will cancel out each 
// other and one odd element will be left, and that is the Answer. 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i <= nums.size(); i++){
            ans ^= i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            ans ^= nums[i];
        }

    return ans;
    }
};
