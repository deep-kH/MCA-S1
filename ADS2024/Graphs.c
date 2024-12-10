#include <stdio.h>
#include <stdlib.h>

typedef struct Graphsnode
{
    int data;
    struct Graphsnode *Next;
} node;

node *new;
void main()
{
    new = (node *)malloc(sizeof(node));
}
