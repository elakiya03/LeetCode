/*
 * Program: Triangle Classifier
 * Description: Reads three side lengths, checks validity, and prints the triangle type or invalid.
 */

#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if ((x + y <= z) || (y + z <= x) || (x + z <= y))
    {
        printf("Not a triangle\n");
    }
    else
    {
        if (x == y && x == z)
        {
            printf("Equilateral\n");
        }

        else if ((x == y) || (x == z) || (y == z))
        {
            printf("Isosceles\n");
        }
        else if (x != y && y != z && z != x)
        {
            printf("Scalene\n");
        }
    }
    return 0;
}