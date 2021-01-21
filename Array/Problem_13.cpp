
/*
Given an array arr of N integers. 
Find the contiguous sub-array with maximum sum.

https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

Example:
Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
*/

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int maxSum=arr[0],currentSum=0;
    int startIndex=0,endIndex=0,s=0;
    for(int i=0;i<n;i++)
    {
        currentSum=arr[i]+currentSum;
        if(currentSum>maxSum)
        {
            maxSum=currentSum;
            startIndex=s;
            endIndex=i;
        }
        if(currentSum<0)
        {
            currentSum=0;
            s=i+1;
        }
            
    }
    
    return maxSum;
}