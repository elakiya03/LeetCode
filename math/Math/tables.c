/*
 * Program: Multiplication Table
 * Description: Reads a number and prints its multiplication table (1-10).
 * Example: Input 5 → Prints 5x1=5, 5x2=10, ..., 5x10=50
 */

#include <stdio.h>

int main()
{
    printf("Enter any number: ");
    unsigned int n;
    scanf("%u", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}