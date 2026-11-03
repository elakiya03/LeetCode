/*
 * Program: Sum of Digits
 * Description: Reads a number and computes the sum of its digits.
 */

#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sumOfDigits(n));
    return 0;
}