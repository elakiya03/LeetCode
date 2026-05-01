/*
 * Program: Leap Year Checker
 * Description: Reads a year and prints whether it is a leap year or not.
 */

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year\n");
    else
        printf("Not a leap year\n");
    return 0;
}