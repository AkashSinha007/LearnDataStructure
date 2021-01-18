/*
An array contains both positive and negative numbers in random order. 
Rearrange the array elements so that all negative numbers appear before 
all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

Note: Order of elements is not important here.
*/

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int left,int right)
{
    while(left<=right)
    {
        //if consecutive both negative
        if(arr[left]<0 && arr[right]<0)
            left=left+1;
        
        //if consecutive both positive
        else if(arr[left]>0 && arr[right]>0)
            right=right-1;
        else if(arr[left]>0 && arr[right]<0)
        {
            swap(arr[left],arr[right]);
            left=left+1;
            right=right-1;
        }
        else
        {
            left=left+1;
            right=right-1;
        }
        
        
    }
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, 0,n-1);
    printArray(arr, n);
    return 0;
}


