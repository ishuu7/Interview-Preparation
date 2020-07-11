// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> idx(270, -1);
        int point = -1;
        int ans = 0;
        for(int i = 0; i < n; i++ ) {
            if(idx[s[i]] > point)
                point = idx[s[i]];
            idx[s[i]] = i;
            ans = max(ans, i - point);
        }
        return ans;
    }
};
