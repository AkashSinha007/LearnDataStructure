/*
https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0
*/

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n),arr2(m);
    for (int i= 0 ;i<n ; i++)cin>>arr1[i];
    for (int i = 0 ; i<m  ;i++)cin>>arr2[i];
    
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    
    int count=0;
    unordered_set<int> u;
    
    for(int i=0;i<n;i++ )
    {
        u.insert(arr1[i]);
    }
    
    for(int j=0;j<m;j++)
    {
        if(u.count(arr2[j])>0)
        {
            count++;
        }
    }
    
    if(count==m)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
}

// /solv
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
// 	DB_function(arr1,arr2);
	return 0;
}