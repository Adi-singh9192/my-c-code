#include <stdio.h>
#include <conio.h>

int main()
{
    int i, beg, end, num, val;
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &num);

    printf("Enter the element of array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Value to find: ");
    scanf("%d", &val);
}