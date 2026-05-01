/*
 * Program: Recursive Sum
 * Description: Reads a number and computes the sum from 1 to n using recursion.
 */

#include <stdio.h>

int recursiveSum(int n)
{
    if (n == 1)
        return 1;
    return n + recursiveSum(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", recursiveSum(n));
    
    return 0;
}