/*
 * Program: Array Doubler
 * Description: Reads an integer n, followed by n integers. Doubles each integer in the array and prints the modified array.
 */

#include <stdio.h>

// Function to double each element of the array
void doubleAll(int arr[], int n)
{
    // NOTE:
    // arr[] is actually a POINTER (int* arr)
    // It stores the address of the original array from main()

    for (int i = 0; i < n; i++)
    {
        // We are modifying the actual memory (not a copy)
        // So changes will reflect in main()
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    // Create array of size n
    int arr[n];

    // Read elements into array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Passing array to function
    // Actually passes address of arr[0]
    doubleAll(arr, n);

    // Printing updated array
    // Values are changed because we modified original memory
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}