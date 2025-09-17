// Write a C program to check whether a number is an Armstrong number or not.
#include <stdio.h>
void main()
{
    int num, ori, rem, n = 0, res = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    ori = num;
    for (ori = num; ori != 0; ++n)
    {
        ori /= 10;
    }
    for (ori = num; ori != 0; ori /= 10)
    {
        rem = ori % 10;
        res += rem * rem * rem;
    }
    if (res == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}