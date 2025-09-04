#include <stdio.h>
void main()
{
    int a, rev, sum = 0;
    printf("Enter the integer: ");
    scanf("%d", &a);

    while (a > 0)
    {
        rev = a % 10;
        a = a / 10;
        sum = sum + rev;
    }
    printf("Sum of digits : %d", sum);
}