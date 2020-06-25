// https://leetcode.com/problems/merge-intervals/


class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b) {
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if( intervals.size() == 0 ) {
            return intervals;
        }
        vector< vector <int> > ans;
        sort (intervals.begin(), intervals.end(), cmp);
        int i = 0;
        for (i = 0; i < intervals.size()-1; i++)
        {
            if(intervals[i][1] >= intervals[i+1][0]) {
                intervals[i+1][0] = intervals[i][0];
                intervals[i+1][1] = max( intervals[i][1], intervals[i+1][1]);
            }

            else {
                ans.push_back(intervals[i]);
            }
        }
        ans.push_back(intervals[i]);
        return ans;
    }
};
