#include<stdio.h>
#include<stdlib.h>

typedef struct Btree_node
{
    int data;
    struct Btree_node *Lchild;
    struct Btree_node *Rchild;
};
