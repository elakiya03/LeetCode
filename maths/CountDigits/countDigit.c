/*
 * Program: Digit Counter
 * Description: Reads a number and counts how many digits it contains.
 */

#include <stdio.h>

int countDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{   
    int n;
    scanf("%d", &n);
    printf("%d\n", countDigits(n));
    return 0;
}