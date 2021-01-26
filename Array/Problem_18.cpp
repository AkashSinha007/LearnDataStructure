/*
Count pairs with given sum

https://www.geeksforgeeks.org/count-pairs-with-given-sum/
*/

int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            count+=m[k-arr[i]];  //counted twice
            if(k-arr[i]==arr[i]) 
                count--;         //eliminating double counting in case same number
        }
        return count/2;
    }