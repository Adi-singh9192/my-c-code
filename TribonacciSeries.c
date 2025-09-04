#include <stdio.h>
void main()
{
    int n, i, a = 0, b = 1, c = 1, d;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
}
