/*
Longest consecutive subsequence 
https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/0
*/

#include<bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  int length=0;
    unordered_set<int> u;
    for(int i=0;i<N;i++)
        u.insert(arr[i]);
        
    for(int i=0;i<N;i++)
    {
        if(u.find(arr[i]-1)==u.end())
        {
            int j=arr[i];
            while(u.find(j)!=u.end())
            {
                j++;
            }
            length=max(length,j-arr[i]);
        }
    }
    return length;
  
}