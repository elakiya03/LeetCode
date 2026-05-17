/*
 * Program: Running Sum Calculator
 * Description: Reads an integer n, followed by n integers. Computes the running sum and prints each cumulative sum.
 */

#include <stdio.h>

void runningSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        printf("%d ", sum);
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
    runningSum(arr, n);
    return 0;
}