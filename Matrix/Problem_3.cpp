/*
Find median in row wise sorted matrix

https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
*/

int median(vector<vector<int>> &matrix, int r, int c)
{
    // code here
    vector<int> v;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            v.push_back(matrix[i][j]);
    }
    sort(v.begin(), v.end());
    int index = (v.size()) / 2;

    return v[index];
}