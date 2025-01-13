#include <stdio.h>

struct node
{
    int data;
    struct node *Rchild;
    struct node *Lchild;
};

struct node* create()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->Rchild = new->Lchild = NULL;
    printf("Enter the data of your Node : ");
    scanf("%d", &new->data);
    return new;
}
