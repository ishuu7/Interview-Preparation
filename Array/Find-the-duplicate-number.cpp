// https://leetcode.com/problems/find-the-duplicate-number/

// O(1) space, O(n) Time - complexity

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[abs(nums[i])] >= 1) { // By making given array as hasp map, as array contains value from 1 to n.
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            }
            else {
                return abs(nums[i]);
            }
        }
        return 0;
    }
};


