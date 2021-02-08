/*

Print all the duplicates in the input string
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/

*/

void fillCharCounts(char *str, int *count)
{
    int i;
    for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
}