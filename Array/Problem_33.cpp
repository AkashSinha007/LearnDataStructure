/*
Minimum swaps and K together 

https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
*/

#include<bits/stdc++.h>
using namespace std;

int minSwap(int *arr, int n, int k)
{
    // Complet the function
    int windowSize = 0;
    int bad = 0;
    int ans;
    for (int i = 0; i < n; i++)
        if (arr[i] <= k)
            windowSize++;

    for (int j = 0; j < windowSize; j++)
        if (arr[j] > k)
            bad++;
    ans = bad;
    for (int i = 0, j = windowSize; j < n; i++, j++)
    {
        if (arr[i] > k)
            bad--;
        if (arr[j] > k)
            bad++;
        ans = min(ans, bad);
    }

    return ans;
}