// https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        long long int temp = 5;
        while(n / temp != 0) {
            ans += (n / temp);
            temp *= 5;
        }
        return ans;
    }
};
