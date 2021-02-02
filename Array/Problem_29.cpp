/*
Trapping Rain Water

Given an array arr[] of N non-negative integers representing the height of blocks. 
If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.
*/

#include<bits/stdc++.h>
using namespace std;

// function to find the trapped water in between buildings
// arr: input array
// n: size of array

int trappingWater(int arr[], int n)
{
    int left[n],right[n];
    int sumWater=0;

    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }

    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        sumWater+=min(left[i],right[i])-arr[i];
    }

    return sumWater;
}