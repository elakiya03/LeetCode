/*
 * Program: Lower Triangle Pattern
 * Description: Reads a number n and prints a lower triangular pattern of asterisks.
 * Example: Input 4 → Prints a 4x4 lower triangle pattern
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i >= j)
                printf("*");
        printf("\n");
    }
    return 0;
}