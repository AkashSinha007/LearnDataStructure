/*
Sorted matrix

https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) 
{
        // code here
        vector<int> v;
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat[i].size();j++)
            {
                v.push_back(Mat[i][j]);
            }
        }
        
        int index=0;
        sort(v.begin(),v.end());
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat[i].size();j++)
            {
                Mat[i][j]=v[index++];
            }
        }
        
        return Mat;
}