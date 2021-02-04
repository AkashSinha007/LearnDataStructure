

/*
Print a given matrix in spiral form

https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    vector<int> v;
    int i, startRowIndex = 0, endRowIndex = r;
    int startColIndex = 0, endColIndex = c;
    while (startRowIndex < endRowIndex && startColIndex < endColIndex)
    {
        //First row
        for (i = startColIndex; i < endColIndex; i++)
        {
            v.push_back(matrix[startRowIndex][i]);
            //cout<<matrix[startRowIndex][i];
        }

        startRowIndex++;

        for (i = startRowIndex; i < endRowIndex; i++)
        {
            v.push_back(matrix[i][endColIndex - 1]);
            //cout<<matrix[i][endColIndex-1];
        }
        endColIndex--;

        if (startRowIndex < endRowIndex)
        {
            for (i = endColIndex - 1; i >= startColIndex; i--)
                v.push_back(matrix[endRowIndex - 1][i]);
        }
        endRowIndex--;

        if (startColIndex < endColIndex)
        {
            for (i = endRowIndex - 1; i >= startRowIndex; i--)
                v.push_back(matrix[i][startColIndex]);
        }
        startColIndex++;
    }
    return v;
}
