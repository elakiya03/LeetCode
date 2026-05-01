/*
 * Program: Prime Factorization
 * Description: Reads an integer n and prints its prime factors.
 */

#include <stdio.h>
void primeFactor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    // if remainder is a prime
    if (n > 1)
    {
        printf("%d\n", n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    primeFactor(n);
    return 0;
}

// O(⎷n)