// https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0

#include <iostream>
using namespace std;

long long int gcd(long long int n, long long int m) {
    if(m != 0)
        return gcd(m, n % m);
    return n;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int a, b;
        cin >> a >> b;
        long long int gc = gcd(a, b);
        long long int lc = (a*b)/gc;
        cout << lc <<" " <<gc <<"\n";
    }
	return 0;
}
