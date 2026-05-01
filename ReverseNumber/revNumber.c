/*
 * Program: Reverse Number
 * Description: Reads a number and outputs its digits in reverse order.
 */

#include <stdio.h>

int reverseNumber(int num)
{
    int rev = 0;

    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", reverseNumber(n));

    return 0;
}