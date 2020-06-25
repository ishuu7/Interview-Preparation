// https://leetcode.com/problems/rotate-image/
// O(1) Extra Space, Very cool solution.


class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++)
                swap(m[i][j], m[j][i]); // firstly made transpose of the matrix.
        
        for(int i=0; i<n; i++)
            reverse(m[i].begin(), m[i].end()); // reverse every row.
    }
};
