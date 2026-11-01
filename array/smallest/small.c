#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int small = (a < b) ? ((a < c) ? a : c)
                        : ((b < c) ? b : c);
    // Find and print the smallest
    printf("Smallest: %d", small);
    return 0;
}