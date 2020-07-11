class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        double res = myPow(x, n / 2);
        if(n & 1) {
            return (n < 0 ? 1 / x : x) * res * res;
        }
        return res * res;
    }
};
