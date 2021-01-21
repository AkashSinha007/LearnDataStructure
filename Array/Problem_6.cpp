/*
Find Union and Intersection of two unsorted arrays

Given two unsorted arrays that represent two sets (elements in every 
array are distinct), find union and intersection of two arrays.
For example, if the input arrays are: 
arr1[] = {7, 1, 5, 2, 3, 6} 
arr2[] = {3, 8, 6, 20, 7} 
Then your program should print Union as {1, 2, 3, 5, 6, 7, 8, 20} and 
Intersection as {3, 6, 7}. Note that the elements of union and 
intersection can be printed in any order.
*/


#include <bits/stdc++.h>
using namespace std;

void printUnion(int a[], int n, int b[], int m)
{
    unordered_set<int> myset;
    for(int i=0;i<n;i++)
        myset.insert(a[i]);
    for(int i=0;i<m;i++)
        myset.insert(b[i]);
    for(auto it=myset.begin();it!=myset.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}


void printIntersection(int a[], int n, int b[], int m)  {
    //code here
    unordered_set<int> myset;
    for(int i=0;i<n;i++)
        myset.insert(a[i]);
    for(int i=0;i<m;i++)
    {
        // If element is present in set then
        // push it to vector V
        if (myset.find(b[i]) != myset.end())
            cout << b[i] << " ";
    }
}

// Driver Program
int main()
{
    int arr1[] = { 7, 1, 5, 2, 3, 6 };
    int arr2[] = { 3, 8, 6, 20, 7 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function call
    printUnion(arr1,  n1,arr2, n2);
    printIntersection(arr1,  n1,arr2, n2);
 
    return 0;
}