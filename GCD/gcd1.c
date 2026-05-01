/*
 * Program: GCD Calculator (Subtraction Method)
 * Description: Reads two integers and computes their Greatest Common Divisor using repeated subtraction. Prints the GCD.
 */

#include <stdio.h>

int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else if (y > x)
            y = y - x;
    }
    return x;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("GCD: %d\n", gcd(x, y));
    return 0;
}