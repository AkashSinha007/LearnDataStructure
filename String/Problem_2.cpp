/*
Palindrome String

https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
*/



int isPlaindrome(string S)
	{
	    // Your code goes hereint n;
    int n=S.size();
    
    if(n==0)return 1;
    
    
    
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        if(S[i]!=S[j])return 0;
    }
    
    return 1;
	}