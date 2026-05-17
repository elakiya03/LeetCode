/*
 * Program: Find Smallest Number
 * Description: Reads three numbers and finds and displays the smallest among them.
 * Uses ternary operators for comparison.
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int small = (a < b) ? ((a < c) ? a : c)
                        : ((b < c) ? b : c);
    // Find and print the smallest
    printf("Smallest: %d", small);
    return 0;
}