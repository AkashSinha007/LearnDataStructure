/*
Value equal to index value
https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1#
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==i+1)
	            v.push_back(arr[i]);
	    }
	    return v;
	}