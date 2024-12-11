#include <stdio.h>
#include <stdlib.h>

typedef struct Graphsnode
{
    int data;
    struct Graphsnode *Next;
} node;

node *new, *temp, *current;
void main()
{
    int n, m;
    printf("Enter number of vertices in your Graph : ");
    scanf("%d", &n);

    node *Graph[n];

    for (int i = 0; i < n; i++)

    
    {
        new = (node *)malloc(sizeof(node));
        new->Next = NULL;
        printf("Enter Value of Vertex : ");
        scanf("%d", &new->data);
        Graph[i] = new;
    }

    for (int i = 0; i < n; i++)
    {
        temp = Graph[i];
        while (temp)
        {
            if (temp == NULL)
            {
                printf("NULL");
                break;
            }
            else
                printf("%d, ", temp->data);
            temp = temp->Next;
        }
        printf("\n");
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter Neighbour of %d", Graph[i]);
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("Edge(1/0)");
    //         scanf("%d", &m);
    //         if (!m)
    //             break;

    //         while (m)
    //         {
    //             printf("Enter its Neighbours : ");
    //             scanf("%d", new->data);
    //             if (Graph[i]->Next == NULL)
    //             {
    //                 Graph[i]->Next = new;
    //                 current = new;
    //             }
    //             else
    //             {
    //                 current->Next = new;
    //                 current = new;
    //             }
    //             m = 0;
    //         }
    //     }
    // }
}
