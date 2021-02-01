/*
Triplet Sum in Array

https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
*/


#include<bits/stdc++.h>
using namespace std;

// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

int sumOfTriplet(int arr[], int N, int X)
{
    int curSum=0,sum=0;
    unordered_set<int> u;
    for(int i=0;i<N-2;i++)
    {
        curSum=X-arr[i];
        for(int j=i+1;j<N;j++)
        {
            if(u.find(curSum-arr[j])!=u.end())
            {
                cout<<"\nThe triplet is"<<endl;
                cout<<arr[i]<<" "<<arr[j]<<" "<<curSum-arr[j];
            }
            u.insert(arr[j]);
        }
    }

}