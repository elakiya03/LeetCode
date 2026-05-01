/*
 * Program: Prime Checker
 * Description: Reads a number and checks whether it is prime.
 */

#include <stdio.h>

const char *isPrime(int n)
{
    if (n <= 1)
        return "Not Prime";

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return "Not Prime";
    }

    return "Prime";
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s\n", isPrime(n));
    return 0;
}