#include <stdio.h>
void main()
{
    int a, rev = 0, rem;
    printf("Enter the integer: ");
    scanf("%d", &a);

    while (a > 0)
    {
        rem = a % 10;
        a = a / 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse of integer : %d", rev);
}