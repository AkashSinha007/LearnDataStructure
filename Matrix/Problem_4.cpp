/*
Row with max 1s
https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
*/

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    int maxCount = INT_MIN;
    int oneCount = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        oneCount = count(arr[i].begin(), arr[i].end(), 1);
        if (oneCount > maxCount && oneCount > 0)
        {
            index = i;
            maxCount = oneCount;
        }
    }
    return index;
}