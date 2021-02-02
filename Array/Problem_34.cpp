/*
Palindromic Array 

https://practice.geeksforgeeks.org/problems/palindromic-array/0
*/

int PalinArray(int a[], int n)
{ //add code here.
    int digit = 0;
    int rev = 0;
    int rem = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        rev = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            temp = temp / 10;
            rev = rev * 10 + rem;
        }
        if (a[i] != rev)
            return 0;
    }

    return 1;
}