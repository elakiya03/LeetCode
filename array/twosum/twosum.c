#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = (int *)malloc(2 * sizeof(int));
    
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    return NULL;
}

int main()
{
    printf("Enter no of elements:");
    int n;
    scanf("%d", &n);

    printf("Enter n elements\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target:");
    int target;
    scanf("%d", &target);

    int returnSize;

    int *a = twoSum(arr, n, target, &returnSize);
    if (a == NULL)
    {
        return 0;
    }

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}