#include <stdio.h>

int longest_streak(int arr[], int n)
{
    int maxstreak = 1;
    int streak = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            streak++;
            if (streak > maxstreak)
                maxstreak = streak;
        }
        else
            streak = 1;
    }
    return maxstreak;
}

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %i values\n", n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Longest streak: %d\n", longest_streak(arr, n));

    return 0;
}