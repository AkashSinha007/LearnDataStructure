/*
Next Permutation
https://leetcode.com/problems/next-permutation/

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

Example:
Input: nums = [1,2,3]
Output: [1,3,2]
*/

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums)
{
    int i=0,j=0;
    for(i=nums.size()-2;i>=0;i--)
    {
        if(nums[i+1]>nums[i])
        {
            break;
        }
    }

    if(i<0)
    {
        reverse(nums.begin(),nums.end());
    }
    else
    {
        for(j=nums.size()-1;j>i;j--)
        {
            if(nums[j]>nums[i])
            {
                swap(nums[i],nums[j]);
                break;
            }
        }
        reverse(nums.begin()+i+1,nums.end());
    }
    
}

