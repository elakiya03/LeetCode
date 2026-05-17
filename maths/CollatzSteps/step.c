/*
 * Program: Collatz Sequence Step Counter
 * Description: Reads a number and counts the Collatz sequence steps needed to reach 1.
 */

#include <stdio.h>

int collatzSequence(long long n)
{
    int count = 0;

    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        count++;
    }
    return count;
}
int main()
{
    long long n;
    scanf("%llu", &n);
    printf("%d\n", collatzSequence(n));

    return 0;
}