/*
 * Program: Array Sorter
 * Description: Reads an integer n, followed by n integers. Sorts the array in ascending order and prints the sorted array.
 */

#include <stdio.h>
#include <stdlib.h>

// comparator function
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); // ascending
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

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}