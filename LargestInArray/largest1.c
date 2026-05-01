/*
 * Program: Largest in Array
 * Description: Reads an integer n, followed by n integers. Finds and prints the largest number in the array.
 */

#include <stdio.h>

int largestInArray(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    printf("Largest: %d\n", largestInArray(arr, n));
    return 0;
}