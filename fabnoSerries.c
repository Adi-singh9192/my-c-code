#include <stdio.h>
void main()
{
    int n, i, c, a = 0, b = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}
