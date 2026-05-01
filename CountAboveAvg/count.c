/*
 * Program: Count Above Average
 * Description: Reads an integer n, followed by n integers. Calculates the average and counts how many numbers are above the average. Prints the count.
 */

#include <stdio.h>

int countingAboveAverage(int arr[], int n)
{
    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int avg = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
            count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Above Average: %d\n", countingAboveAverage(arr, n));
}