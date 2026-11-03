#include <stdio.h>

int second_largest(int arr[], int n)
{
    int max = arr[0];
    int sec = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            sec = max;
            max = arr[i];
        }
        else if (arr[i] != max && arr[i] > sec)
        {
            sec = arr[i];
        }
    }
    return sec;
}

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Second Largest: %d\n", second_largest(arr, n));
    return 0;
}