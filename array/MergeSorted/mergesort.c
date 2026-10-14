#include <stdio.h>

void mergeTwoSortedArray(int arr1[], int arr2[], int n1, int n2)
{

    int temp[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            temp[k++] = arr1[i++];
        else
            temp[k++] = arr2[j++];
    }

    while (i < n1)
        temp[k++] = arr1[i++];

    while (j < n2)
        temp[k++] = arr2[j++];

    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", temp[i]);
    printf("\n");
}

int main()
{
    int n1;
    printf("Enter no of elements (n1): ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d values\n", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    int n2;
    printf("Enter no of elements(n2): ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d values\n", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    mergeTwoSortedArray(arr1, arr2, n1, n2);
}