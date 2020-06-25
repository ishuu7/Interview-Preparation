// https://leetcode.com/problems/maximum-subarray/
// covering negative integers only case also.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int ans = INT_MIN;
        for(int u : nums){
            curr += u;
            ans = max(ans, curr);
            curr = max(a, 0);
        }
        return ans;
    }
};
