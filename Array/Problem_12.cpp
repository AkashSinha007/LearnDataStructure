/*
Merge Without Extra Space:
===========================
Given two sorted arrays arr1[] of size N and arr2[] of size M. 
Each array is sorted in non-decreasing order. Merge the two arrays 
into one sorted array in non-decreasing order without using any extra space.

https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

Example:
Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
Explanation: Since you can't use any 
extra space, modify the given arrays
to form 
arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}
*/

#include<bits/stdc++.h>
using namespace std;

void mergeSortedArraysWithoutExtraSpace(int a1[],int m,int a2[],int n)
{
    int i=m-1,j=0;
    while(i>=0 && j<m)
    {
        if(a1[i]>=a2[j])
        {
            swap(a1[i],a2[j]);
            i--,j++;
        }
        else
        {
            break;
        }
        
    }
    sort(a1,a1+m);
    sort(a2,a2+n);
}