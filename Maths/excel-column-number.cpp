class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
        int poww[n];
        poww[0] = 1;
        for(int i = 1; i < n; i++) {
            poww[i] = poww[i-1]*26;
        }
        int cc = n-1;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += (poww[cc] * (s[i] - 'A' + 1));
            cc--;
        }
        return ans;
    }
};
