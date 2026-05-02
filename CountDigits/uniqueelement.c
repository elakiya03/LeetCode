/*
 * Program: Count Unique Elements
 * Description: Reads an integer n, followed by n integers. Counts the number of unique elements in the array and prints the count.
 */

#include <stdio.h>
#define MAX_SIZE 10000

int countUniqueElements(int arr[], int n)
{
    int count = 0;
    int temp[MAX_SIZE] = {0};

    for (int i = 0; i < n; i++)
        temp[arr[i]]++;

    for (int i = 0; i < n; i++)
        if (temp[arr[i]] == 1)
            count++;
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", countUniqueElements(arr, n));
    return 0;
}