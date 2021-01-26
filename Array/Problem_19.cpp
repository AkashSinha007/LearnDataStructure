/*
Common elements 
Given three arrays sorted in increasing order. 
Find the elements that are common in all three arrays.

https://practice.geeksforgeeks.org/problems/common-elements1132/1#
*/

#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0,j=0,k=0;
            vector<int> v;
            while(i<n1 && j<n2 && k<n3)
            {
                if (A[i]==B[j] && A[i]==C[k]){
                    v.push_back(A[i]);
                    // -->3 --3 --3 4 5
                    while (i<n1-1 && A[i]==A[i+1])i++;
                    while (j<n2-1 && B[j]==B[j+1])j++;
                    while (k<n3-1 && C[k]==C[k+1])k++;
                    i++,j++,k++;
                }
                else{
                    int minval = min({A[i],B[j],C[k]});
                if (minval==A[i])i++;
                else if (minval==B[j])j++;
                else k++;
                }
                
                
            }
            return v;
        }