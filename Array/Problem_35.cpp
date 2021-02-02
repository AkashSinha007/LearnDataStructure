/*

Find the median
https://practice.geeksforgeeks.org/problems/find-the-median0527/1
*/

int find_median(vector<int> v)
{
    // Code here.
    int median;
    int n = v.size();
    sort(v.begin(), v.end());
    if (n % 2 == 0) //even
    {
        median = (v[(n - 1) / 2] + v[(n + 1) / 2]) / 2;
    }

    else
    {
        median = v[(n - 1) / 2];
    }
    return median;
}