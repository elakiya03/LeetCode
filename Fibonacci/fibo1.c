/*
 * Program: Fibonacci Calculator
 * Description: Reads an integer n and computes the nth Fibonacci number using recursion. Prints the result.
 */

#include <stdio.h>

long long fibonacci(long long n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    long long x;
    scanf("%lld", &x);
    printf("Fibo: %lld\n", fibonacci(x));
    return 0;
}