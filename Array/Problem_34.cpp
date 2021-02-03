/*
Minimum no. of operations required to make an array palindrome

https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/
*/

int PalinArray(int a[], int n)
{ //add code here.
    int op = 0;
    int i=0, j= n-1;

    while(i<=j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else if(a[i]>a[j])
        {
            j--;
            a[j]=a[j]+a[j+1];
            op++;
        }
        else
        {
            i++;
            a[i]=a[i]+a[i-1];
            op++;
        }
    }

    return op;
}