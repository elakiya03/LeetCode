/*
 * Program: Perfect Number Checker
 * Description: Reads an integer n and checks if it is a perfect number (sum of proper divisors equals the number). Prints "Yes" if perfect, "No" otherwise.
 */

#include <stdio.h>

const char *isPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n ? "Yes" : "No";
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%s\n", isPerfectNumber(n));

    return 0;
}