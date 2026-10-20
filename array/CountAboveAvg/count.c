#include <stdio.h>

int counting_above_average(int arr[], int n)
{
    int count = 0;
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double avg = sum / n;
    printf("Average: %lf", avg);

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
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d values\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nNo of elements Above Average: %d\n", counting_above_average(arr, n));
}