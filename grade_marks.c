#include <stdio.h>
void main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 75)
        printf("Honors");
    else if (marks >= 60)
        printf("First Division");
    else if (marks >= 40)
        printf("Second Division");
    else if (marks >= 36)
        printf("Pass");
    else
        printf("Fail");
}
