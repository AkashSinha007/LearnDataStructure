/*
Given an array arr[] and a number K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct
*/
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[],int size,int k)
{
    sort(arr, arr + size);
    return arr[k-1];
}

int main() 
{ 
    int arr[] = { 12, 3, 5, 7, 19 }; 
    int n = sizeof(arr) / sizeof(arr[0]), k = 3; 
    cout << "K'th smallest element is " << kthSmallest(arr, n, k); 
    return 0; 
} 