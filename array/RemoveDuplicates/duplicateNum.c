/*
 * Program: Remove Duplicate Numbers
 * Description: Reads an integer n, followed by n integers. Removes duplicate numbers and prints each unique number only once.
 */

#include <stdio.h>
#define MAX_SIZE 100000

void removeDuplicateNumber(int arr[], int n)
{
    int seen[MAX_SIZE] = {0};

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        if (!seen[val])
        {
            printf("%d ", val);
            seen[val]++;
        }
    }
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

    removeDuplicateNumber(arr, n);
    return 0;
}