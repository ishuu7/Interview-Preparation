// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m.count(target - nums[i])) {
                return {i, m[target - nums[i]] - 1};
            }
            else {
                m[nums[i]] = i + 1;
            }
        }
        return {};
        
    }
};
