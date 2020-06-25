// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
// O(1) Space, O(n) Time


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int c[3] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            c[a[i]]++;
        }
        int p1 = 0;
        for(int cc = 0; cc < 3; cc++) {
            for(int i = p1; i < c[cc] + p1; i++) {
                a[i] = cc;
            }
            p1 += c[cc];
        }
        for(int i = 0; i < n; i++) {
            cout << a[i] <<" ";
        }
        cout <<"\n";
    }
	return 0;
}
