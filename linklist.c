#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *getnode()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:-");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

struct node *createlist(int n)
{
    struct node *start = NULL;
    struct node *temp = NULL;
    struct node *newnode = NULL;
    for (int i = 0; i < n; i++)
    {
        newnode = getnode();
        if (start == NULL)
        {
            start = newnode;
            temp = start;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        if (temp != NULL)
        {
            temp->next = start;
        }
    }
    return start;
}
void display(struct node *start)
{
    struct node *temp = start;
    while (temp != start)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void main()
{
    int n;
    printf("enter the size of list:");
    scanf("%d", &n);
    struct node *start = createlist(n);
    display(start);
}