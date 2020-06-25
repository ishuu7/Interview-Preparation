// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0
// Good implementation of while loop.


#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--) {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++) {
             cin>>arr[i];
         }
         int i=0;
         bool hasProfit = false;
         while(i<n-1) {
             while(i<n-1 && arr[i]>=arr[i+1]) {
                 i++;
             }
             int start=i;
             while(i<n-1 && arr[i]<=arr[i+1]){
                 i++;
             }
             if(arr[i]-arr[start]>0){
                 hasProfit = true;
                 cout<<"("<<start<<" "<<i<<") ";
             }
         }
         if(!hasProfit) {
             cout<<"No Profit";
         }
         cout<<"\n";
     }
	return 0;
}
