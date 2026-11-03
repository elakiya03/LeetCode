/*
 * Program: Factorial Calculator
 * Description: Reads a number and calculates its factorial using recursion.
 * Example: Input 5 → Output 5! = 120
 */

#include <stdio.h>

long factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    printf("%d! = %ld\n", n, factorial(n));
    return 0;
}

// time - O(n)
// space - O(n)