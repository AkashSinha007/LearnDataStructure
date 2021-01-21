/*
Kadane's Algorithm 
====================
Given an array arr of N integers. 
Find the contiguous sub-array with maximum sum.

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output: 9
Explanation: Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

*/

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n)
{
    
    // Your code here
    int i=0;
    int sum=0,maxSum=0;
    int index=0,startIndex=0,endIndex=0;
    for(int i=0;i<n;i++)
    {
            sum+=arr[i];
           // cout<<sum<<endl;
            if(maxSum<sum)
            {
                maxSum=sum;
                startIndex=index;
                endIndex=i;
            }
            if(sum<0)
            {
                sum=0;
                startIndex=i+1;
            }
                
        
    }

    return maxSum;
}


/*Driver program to test maxSubArraySum*/
int main() 
{ 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout<<"\nMax Sub array Sum is: "<<max_sum;
    return 0; 
} 