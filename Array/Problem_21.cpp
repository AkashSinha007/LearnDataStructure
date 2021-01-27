/*
Subarray with 0 sum 
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

https://practice.geeksforgeeks.org/problems/subarray-with-0-sum/0
*/

#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_set<int> us;
    int sum=0;
 //   us.insert(0);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)return true;
        if(us.count(sum))
            return true;
        us.insert(sum);
    }
    return false;
}