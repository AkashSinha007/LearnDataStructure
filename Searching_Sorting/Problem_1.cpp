/*
First and last occurrences of X     

https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/0
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<v.size();i++)
        cin>>v[i];
        
    int start=0,end=n-1;
    int mid;
    int ans1=-1,ans2=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(v[mid]>x)end=mid-1;
        else if(v[mid]<x)start=mid+1;
        else
        {
            ans1=mid;
            end=mid-1;
        }
    }
    if(ans1==-1)
    {
        cout<<"-1"<<endl;
        return;
    }
    start=0,end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(v[mid]>x)end=mid-1;
        else if(v[mid]<x)start=mid+1;
        else
        {
            ans2=mid;
            start=mid+1;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    
    
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}