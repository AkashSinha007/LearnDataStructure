/*
https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/

*/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        
        // int profit = 0;
        int n=prices.size();
        vector<int> left(n),right(n);
        
        
        int minVal=INT_MAX;
        int profitLeft=0;
        int maxVal=0;
        int profitRight=0;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            minVal=min(minVal,prices[i]);
            profitLeft=max(profitLeft,prices[i]-minVal);
            left[i]=profitLeft;
        }
        
        for(int i=n-1;i>=0;i--)
        {
            maxVal=max(maxVal,prices[i]);
            profitRight=max(profitRight,maxVal-prices[i]);
            right[i]=profitRight;
        }
        
//         for (int i = 0 ;i<n ; i++)cout<<left[i]<<" ";
//         cout<<endl;
//         for (int i = 0 ; i<n ; i++)cout<<right[i]<<" ";
        
        for(int i=0;i<n-1;i++)
        {
            profit=max(profit,left[i]+right[i+1]);
        }
        
        profit=max({profit,left[n-1],right[0]});
        
        return profit;
    }