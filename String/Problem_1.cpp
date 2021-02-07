/*
Reverse String

https://leetcode.com/problems/reverse-string/submissions/

*/

#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int n = s.size();
    int i, j;
    for (i = 0, j = n - 1; i <= j; i++, j--)
        swap(s[i], s[j]);
}