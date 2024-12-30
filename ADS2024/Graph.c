#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    int wieght;
} node;

node *new, *temp;
int size;

node *createNode(int data)
{
    new = (node *)malloc(sizeof(node));
    new->data = data;
    new->next = NULL;
    return new;
}

int findIndex(node *V[], int size, int data)
{
    for (int i = 0; i < size; i++)
    {
        if (V[i]->data == data)
            return i;
    }
    return -1;
}

int addedge(node *V[], int v1, int v2, int wt)
{
    int j;
    if (findIndex(V, size, v1) == -1 || findIndex(V, size, v2) == -1)
    {
        printf("Entered Vertices are not in your Graph!");
        j = 0;
    }
    if (v1 == v2)
    {
        printf("Can't ADD Loops in a simple Graph!");
        j = 0;
    }

    else
    {
        new = createNode(v2);
        new->wieght = wt;
        int i = findIndex(V, size, v1);
        if (i != -1)
        {
            new->next = V[i]->next;
            V[i]->next = new;
        }

        new = createNode(v1);
        new->wieght = wt;
        i = findIndex(V, size, v2);
        if (i != -1)
        {
            new->next = V[i]->next;
            V[i]->next = new;
        }
        j = 1;
    }
    return j;
}

void printGraph(node *V[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d - ", V[i]->data);
        temp = V[i]->next;
        while (temp)
        {
            printf("%d(%d) , ", temp->data, temp->wieght);
            temp = temp->next;
        }
        if (temp == NULL)
            printf("NULL");
        printf("\n");
    }
}

void bfs(node *V[], int start)
{
    int queue[size], vis[size], rear = 0, front = 0, pop;
    node *temp;
    for (int x = 0; x < size; x++)
        vis[x] = 0;
    int i = findIndex(V, size, start);
    queue[rear++] = i;
    vis[i] = 1;

    while (front < rear)
    {
        pop = queue[front++];
        temp = V[pop];
        printf("%d\t", temp->data);
        while (1)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                break;
            }
            else
            {
                i = findIndex(V, size, temp->data);
                if (vis[i] == 0)
                {
                    queue[rear++] = i;
                    vis[i] = 1;
                }
            }
        }
    }
}

void dfs(node *V[], int start)
{
    int stack[size], vis[size], top = -1, pop;
    node *temp;
    for (int x = 0; x < size; x++)
        vis[x] = 0;
    int i = findIndex(V, size, start);
    stack[++top] = i;
    vis[i] = 1;

    while (top >= 0)
    {
        pop = stack[top--];
        temp = V[pop];
        printf("%d\t", temp->data);
        while (1)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                break;
            }
            else
            {
                i = findIndex(V, size, temp->data);
                if (vis[i] == 0)
                {
                    stack[++top] = i;
                    vis[i] = 1;
                }
            }
        }
    }
}

void prims(int start)
{
    
}

int factorial(int n)
{
    if (n > 0)
        return n + factorial(n - 1);
    else
        return 0;  
}

void main()
{
    int v1, v2, falg, hi, start, weight;
    printf("Enter Number of Vertex : ");
    scanf("%d", &size);
    node *V[size];

    for (int i = 0; i < size; i++)
    {
        int data;
        printf("Enter vertex %d: ", i + 1);
        scanf("%d", &data);
        V[i] = createNode(data);
    }

    for (int i = 0; i < factorial(size - 1); i++)
    {
        printf("\n%d\n", i);
        printf("ADD edge?(1/0) : ");
        scanf("%d", &falg);
        if (falg)
        {
            printf("Enter Vertex 1 for the edge : ");
            scanf("%d", &v1);
            printf("Enter Vertex 1 for the edge : ");
            scanf("%d", &v2);
            printf("Enter the Weight Between (%d,%d) : ", v1, v2);
            scanf("%d", &weight);

            hi = addedge(V, v1, v2, weight);
            if (!hi)
                i--;
        }
        else
            break;
    }

    printGraph(V, size);

    printf("Enter Starting data for Traversal : ");
    scanf("%d", &start);
    printf("BFS : \n");
    bfs(V, start);
    printf("\nDFS : \n");
    dfs(V, start);
}