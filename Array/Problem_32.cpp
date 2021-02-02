/*
Three way partitioning 

https://practice.geeksforgeeks.org/problems/three-way-partitioning/1
*/

#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int> &array, int a, int b)
{
    // code here
    int n = array.size();
    int start = 0, end = n - 1, i = 0;
    while (i <= end)
    {
        if (array[i] < a)
        {
            swap(array[i], array[start]);
            start++;
            i++;
        }
        else if (array[i] > b)
        {
            swap(array[i], array[end]);
            end--;
        }
        else
        {
            i++;
        }
    }
}
