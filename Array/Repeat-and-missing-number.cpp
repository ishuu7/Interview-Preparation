// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0
// O(1) Extra Space, O(n) time

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int rep;
        long long int a[n+1] = {};
        for(int i = 1; i <= n; i++) { // Using the given array as hashmap.
            int x;
            cin >> x;
            if(a[x] == n + 2) {
                rep = x;
            }
            else {
                a[x] = n + 2;
            }
        }
        int mis;
        for(int i = 1; i <= n; i++) {
            if(a[i] != n + 2) {
                mis = i;
                break;
            }
        }
        cout << rep <<" " << mis <<"\n";
    }
	return 0;
}
