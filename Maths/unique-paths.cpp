// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    vector<vector<int> >dp;
    int m1;
    int n1;
    int fun(int r, int c) {
        if(r > n1 || c > m1)
            return 0;
        if(r == n1 && c == m1)
            return 1;
        if(dp[r][c] != -1)
            return dp[r][c];
        int ans = fun(r + 1, c) + fun(r, c + 1);
        return dp[r][c] = ans;
    }
    int uniquePaths(int m, int n) {
        dp.resize(n + 1);
        m1 = m;
        n1 = n;
        for(int i = 0; i < n + 1; i++) {
            dp[i].assign(m + 1, -1);
        }
        return fun(1, 1);
        
    }
};
