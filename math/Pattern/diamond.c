/*
 * Program: Diamond Pattern Printer
 * Description: Reads an odd integer n and prints a diamond pattern of asterisks with height n.
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter odd number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        int spaces = (n - i) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
            printf("*");

        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2)
    {
        int spaces = (n - i) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}