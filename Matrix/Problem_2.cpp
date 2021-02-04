/*
Search a 2D Matrix
https://leetcode.com/problems/search-a-2d-matrix/

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int i;
        int m = matrix[0].size();
        if(matrix[0][0]>target)return false;
        for(i=0;i<matrix.size();i++)
        {
            if(target<matrix[i][0])
                break;
            
        }
        return binarySearch(matrix[i-1],0,matrix[i-1].size()-1,target);
        
    }
    
    bool binarySearch(vector<int> v,int start,int end,int val)
    {
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            
            if(val==v[mid])
                return true;
            else if(val<v[mid]) end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};