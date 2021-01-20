/*
find duplicate in an array of N+1 Integers

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

https://leetcode.com/problems/find-the-duplicate-number/
*/
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return nums[i];
    }
    return -1;
}
