#include <stdio.h>

void main()
{
    int arr[100], i, j, n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the element of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("Unsorted array : %d", arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}