/*
 * Program: LCM Calculator
 * Description: Reads two integers and computes their Least Common Multiple using GCD. Prints the LCM.
 */

#include <stdio.h>

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    return x;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("GCD: %d\n", x * y / gcd(x, y));
}