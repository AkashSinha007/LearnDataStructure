/*
Merge Intervals

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

*/
//     bool cmp(vector<int>a,vector<int>b){
//     if (a[1]==b[1])return a[0]<b[0];
//     else return a[1]<b[1];
// }

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    vector<vector<int>> result;
    int length = intervals.size();

    if (length == 0)
        return result;

    // sort(intervals.begin(),intervals.end(),cmp);

    sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) { return a[0] < b[0]; });

    result.push_back(intervals[0]);

    for (int i = 1; i < length; ++i)
    {
        vector<int> backVec = result.back();

        if (intervals[i][0] > backVec[1])
        {
            result.push_back(intervals[i]);
        }
        else
        {
            result.back()[1] = max(result.back()[1], intervals[i][1]);
        }
    }

    return result;
}