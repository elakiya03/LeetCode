/*
 * Program: Longest Streak
 * Description: Reads an integer n, followed by n integers. Finds the length of the longest consecutive streak of the same number and prints it.
 */

#include <stdio.h>

int longestStreak(int arr[], int n)
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
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Longest streak: %d\n", longestStreak(arr, n));

    return 0;
}