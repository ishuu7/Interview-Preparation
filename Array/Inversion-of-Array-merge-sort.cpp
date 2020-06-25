// https://www.hackerrank.com/challenges/ctci-merge-sort/problem
// Important problem.
// merge sort implementation.


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for(int i = (int)a ; i < (int)b ; i++)
#define rrep(i,a,b) for(int i = (int)a; i >= (int)b; i--)
#define pb push_back
#define vi vector<int>
#define yo(a) if(local == 'L'){cerr <<#a <<" = " << a <<"\n";}
#define COOL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int ans = 0;

void merge(int *a, int l, int m, int r) {
    int i, j, k;
    int size1 = m - l + 1;
    int size2 = r - m;
    int L[size1], R[size2];
    for(i = 0; i < size1; i++) {
        L[i] = a[l + i];
    }
    for(j = 0; j < size2; j++) {
        R[j] = a[m + j + 1];
    }
    i = 0, j = 0, k = l;
    while(i < size1 && j < size2) {
        if(L[i] <= R[j]) {
            a[k++] = L[i++];
        }
        else {

            a[k++] = R[j++];
            ans += (size1 - i); // here when we find a inversion, we increase the count by distance.
            
        }
    }
    while(i < size1) {
        a[k++] = L[i++];
    }
    while(j < size2) { 
        a[k++] = R[j++];
    }

}


void merge_sort(int *a, int l, int r) {
    if(l < r) {
        int m = (l + r) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m+1, r);
        merge(a, l, m, r);

    }
}


void solve () {
    int n;
    cin >> n;
    int a[n];
    ans = 0;
    rep(i,0,n)cin >> a[i];
    merge_sort(a, 0, n-1);
    cout << ans <<"\n";
}

int32_t main() {
    COOL
    #ifdef L
        //local = 'L';
        freopen("in.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
    int tc;
    cin >> tc;
    while(tc--)
        solve();


    return 0;
}

