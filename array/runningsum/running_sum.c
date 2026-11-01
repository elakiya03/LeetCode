#include <stdio.h>

void running_sum(int arr[], int n)
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
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Running sum: ");
    running_sum(arr, n);
    printf("\n");
    return 0;
}