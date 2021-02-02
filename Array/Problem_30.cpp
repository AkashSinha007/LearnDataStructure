/*
Chocolate Distribution Problem

https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0

*/

#include <bits/stdc++.h>
using namespace std;

//const int maxN = 10000005;
// int arr[maxN]
void solve()
{
    
    
    cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	 int n;
	 cin>>n;
	 vector<int>arr(n); //wrong - int arr[n];
	 for(int i=0;i<n;i++)
	 {
	     cin>>arr[i];
	 }
	 int m;
	 cin>>m;
	 int minVal=INT_MAX;
	 sort(arr.begin(),arr.end());
	 for(int i=0;i<=n-m;i++)
	 {
	     //n-m-1 n-2
	     minVal=min(minVal,arr[i+m-1]-arr[i]);
	 }
	 cout<<minVal<<endl;
}
int main() {
	//code
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}