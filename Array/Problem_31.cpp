
/*
Smallest subarray with sum greater than x 

https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#
*/

#include<bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x)
{
    int currsum=0;
    int start=0;
    int minLength=INT_MAX;
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        while(currsum>x)
        {
            minLength=min(minLength,i-start+1);
            currsum -= arr[start];
            start++;
        }

    }

    return minLength;
}