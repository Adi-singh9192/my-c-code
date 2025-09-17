#include <stdio.h>
void main()
{
    int i, j, num;
    printf("Enter number of rows: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}