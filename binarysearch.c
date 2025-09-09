#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[100], num, i, val, beg, end, mid;
    printf("Enter the size of array: ");
    scanf("%d", &num);

    printf("Enter the element of array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Value to find: ");
    scanf("%d", &val);

    beg = 0;
    end = num - 1;
    // mid = (beg + end) / 2;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == val)
        {
            printf("%d is found at %d", val, mid + 1);
            break;
        }
        else if (arr[mid] > val)
            beg = mid - 1;
        else
        {
            beg = mid + 1;
        }
        if (end < beg)
        {
            printf("%d is not found", val);
        }
    }
    return 0;
}