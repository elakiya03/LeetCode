#include <stdio.h>
#define MAX_SIZE 100000

// Frequency counting
void remove_duplicate_number(int arr[], int n)
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
    printf("Enter no of elemets: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    remove_duplicate_number(arr, n);
    return 0;
}