#include <stdio.h>

void main()
{
    int arr[100], i, j, n, temp, min = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the element of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}