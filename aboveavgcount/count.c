#include <stdio.h>
#include <stdlib.h> // Required for atoi()

int counting_above_average(int arr[], int n)
{
    int count = 0;
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double avg = sum / n;
    printf("Average: %lf\n", avg);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
            count++;
    }
    return count;
}

int main(int argc, char *argv[])
{
    // 1. Safety Check: Ensure the user provided at least the count and one number
    if (argc < 3)
    {
        printf("Error: Missing arguments!\n");
        printf("Usage: %s <total_count> <num1> <num2> ...\n", argv[0]);
        return 1;
    }

    // 2. Read the first user argument (argv[1]) as the total array size 'n'
    int n = atoi(argv[1]);
    int arr[n];

    // 3. Loop through the remaining elements starting from argv[2]
    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 2]);
    }

    printf("No of elements Above Average: %d\n", counting_above_average(arr, n));
    return 0;
}
