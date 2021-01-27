/*
Rearrange array in alternating positive & negative items 
with O(1) extra space
https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
*/

#include<bits/stdc++.h>
using namespace std;

void rightRotate(int arr[],int from,int to)
{
    int temp=arr[to];
    for(int i=to;i>from;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[from]=temp;
}

void rearrange(int arr[], int n)
{
    int wrongIndex=-1;
    for (int i = 0; i < n; i++)
    {
        if(wrongIndex!=-1)
        {
            if((arr[wrongIndex]>=0 && arr[i]<0)||(arr[wrongIndex]<0 && arr[i]>0))
            {
                rightRotate(arr,wrongIndex,i);
                if(i-wrongIndex>=2)
                    wrongIndex+=2;
                else
                    wrongIndex=-1;   
            }
        }
        else
        {
            if( (arr[i]<0 && i%2==1)||(arr[i]>0 && i%2==0) )
            {
                wrongIndex=i;
            }
        }
        
    }
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
     
    // int arr[] = { -5, -2, 5, 2, 
    //              4, 7, 1, 8, 0, -8 };
     int arr[] = { -1,-2,-3,-4,-5,-6,1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, n);
 
    rearrange(arr, n);
 
    cout << "Rearranged array is \n";
    printArray(arr, n);
 
    return 0;
}