// https://leetcode.com/problems/set-matrix-zeroes/
// O(m + n) Space, will try to do in O(1).
// O(m * n) Time.


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> r, c;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto it : r) {
            for(int j = 0; j < m; j++) {
                matrix[it][j] = 0;
            }
        }
        for(auto it : c) {
            for(int j = 0; j < n; j++) {
                matrix[j][it] = 0;
            }
        }
    }
};
