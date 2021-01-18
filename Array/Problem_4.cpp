/*
Given an array A[] consisting 0s, 1s and 2s. 
The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.
*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort012(int arr[], int n)
{
    int low=0,high=n-1;
    int mid=0;
    while(mid<=high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid],arr[low]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        default:
            break;
        }
    }

    // int c0 = 0, c1 = 0, c2 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     switch (arr[i])
    //     {
    //     case 0:
    //         c0++;
    //         break;
    //     case 1:
    //         c1++;
    //         break;
    //     case 2:
    //         c2++;
    //         break;
    //     }
    // }
    // int index = 0;
    // while (c0 > 0)
    // {
    //     arr[index] = 0;
    //     index++;
    //     c0--;
    // }
    // while (c1 > 0)
    // {
    //     arr[index] = 1;
    //     index++;
    //     c1--;
    // }
    // while (c2 > 0)
    // {
    //     arr[index] = 2;
    //     index++;
    //     c2--;
    // }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    cout << "array after segregation ";

    printArray(arr, n);
    return 0;
}