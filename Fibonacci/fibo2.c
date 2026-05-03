/*
 * Approach - Bottom Up  space optimized - O(n) time and O(1) space
 * Program: Fibonacci Sequence Printer
 * Description: Reads an integer n and prints the first n Fibonacci numbers.
 */

#include <stdio.h>

int main()
{
    int t1 = 0;
    int t2 = 1;

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", t1);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", t2);
            continue;
        }
        long long curr = t1 + t2;
        t1 = t2;
        t2 = curr;

        printf("%lld ", curr);
    }
    return 0;
}