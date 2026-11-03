/*
 * Program: Digit Frequency Counter
 * Description: Reads an unsigned long integer and counts the frequency of each digit (0-9). Prints each digit that appears along with its count.
 */

#include <stdio.h>

int main()
{
    unsigned long int n;
    scanf("%ld", &n);

    int arr[10] = {0};

    while (n > 0)
    {
        int rem = n % 10;
        arr[rem]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            printf("%d:%d\n", i, arr[i]);
    }

    return 0;
}