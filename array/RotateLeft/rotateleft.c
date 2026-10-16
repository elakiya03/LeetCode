#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// In a function parameter, int arr[] is treated as int *arr.
// It points to the caller's first element, so edits change the original array.
void rotateLeftByK(int arr[], int n, int k)
{

    k %= n;

    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    // When you call rotateLeftByK(arr, n, k), C passes a pointer to the first element of arr to the function. The function parameter int arr[] is treated as int *arr. So the function works on the original array, not a copy. arr is already converted to pointer when you pass it to a function.
    rotateLeftByK(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}